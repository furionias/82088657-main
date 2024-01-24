from cs50 import get_string
print("hello, world")

answer = input("Enter name:")
print(f"Hello, {answer}")

words = set()

def check(word):
     if word.lower() in words:
          return True
def load(dictionary):
     file = open (dictionary, "r")
     for line in file:
          words = line.rstrip()
          words.add(word)

     close(file)
     return True


def size():
     return len(words)

def unload():
     return True
