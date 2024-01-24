import math
from cs50 import get_string


def readability(letters):
    text = get_string("Enter:")
    for i in text:

        if i.isalpha():
            letters += 1


    word_num = len(text.split())

    num_sentences = text.count(".") + text.count("!") + text.count("?")

    L1 = (float(letters) / float(word_num)) * 100
    S1 = (float(num_sentences) / float(word_num)) * 100

    index = round(0.0588 * L1 - 0.296 * S1 - 15.8)
    print(index)

    if (index < 1):
        print("Before Grade 1")

    if (index > 16):
        print("Grade 16+")

    else:
        print(f"Grade {index}")
readability( letters=0)


