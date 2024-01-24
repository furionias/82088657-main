import time


def random_number_guessing_game():
    import random

    num_range = int(input("Input first number of range:"))
    num_range2 = int(input("Input second number of range:"))
    try:
        while (num_range == "" or num_range2 == "") or (
            num_range == "" and num_range2 == ""
        ):
            num_range = int(input("Input first number of range:"))
            num_range2 = int(input("Input second number of range:"))
    except ValueError:
        print("Incorrect type of values")
    num = random.randrange(num_range, num_range2)
    user = int(input("Enter Number:"))
    while user != num:
        user = int(input("Enter Number again:"))
        if user > num:
            print("Too high")
        elif user < num:
            print("Too low")

    print("You have won")
    print(f"The number was {num}")


def word_guessing_game(words):
    import random

    words = [
        "Apple",
        "Orange",
        "Data",
        "Python",
        "HTML",
        "Java",
        "C",
        "C++",
        "Arsenal",
        "UCL",
    ]
    rand_word = random.choices(words)

    print("Here is the list of words ")
    print(words)
    user = input("Enter word:")
    while user != rand_word:
        print("Incorrect")
        user = input("Try again:")
        if user == "exit":
            break
            continue

        for i in words:
            words.remove(i)  # removes clues
            print(words)

    print("You win")


def rock_paper_scissors():
    import random

    options = ["rock", "paper", "scissors"]
    computer = random.choice(options)
    user = input("Enter rock, paper and scissors:")
    if user == "rock" and computer == "scissors":
        print("Player wins")

    elif user == "scissors" and computer == "rock":
        print("Computer wins")

    elif user == "paper" and computer == "scissors":
        print("Computer wins")

    elif user == "scissors" and computer == "paper":
        print("Player wins")

    elif user == "paper" and computer == "rock":
        print("Player wins")

    elif user == "rock" and computer == "paper":
        print("Computer wins")

    else:
        print("No winner")


def calculator():
    num1 = int(input("Num 1:"))
    num2 = int(input("Num 2:"))
    num3 = int(input("Num 3:"))
    num4 = int(input("Num 4:"))
    operation = input("Enter operation (+, -, /, *):")

    if operation == "+":
        result = num1 + num2 + num3 + num4
        print(result)

    elif operation == "-":
        result = num1 - num2 - num3 - num4
        print(result)

    elif operation == "/":
        result = num1 / num2 / num3 / num4
        print(result)

    elif operation == "*":
        result = num1 * num2 * num3 * num4
        print(result)


def quiz():
    points = 20
    finishedQuiz = False
    while points > 0 or finishedQuiz == False:
      q1 = input("Enter what are three web based languages:")
      if q1 == "HTML, CSS, JS":
        print("Correct")

      else:
        print("Incorrect")
        points -= 4

      q2 = input("Enter what is the capital of England:")
      if q1 == "London":
        print("Correct")

      else:
        print("Incorrect")
        points -= 4

      q3 = input("Enter the country known for Frankfurters and Bratwurst:")
      if q3 == "Germany" or "germany":
        print("Correct")

      else:
        print("Incorrect")
        points -=4

      q4 = input("What continent is Nigeria located in Africa:")
      if q4 == "Africa" or "africa":
        print("Correct")

      else:
        print("Incorrect")
        points -= 4

      print("You have finished the quiz")
      finishedQuiz = True
      print(f"Here are your points {points}")



class Terminal:
    def __init__(self, memory, user, password, data):
        self.memory = memory
        self.user = user
        self.password = password
        self.data = data

    def terminal_data(self):
        while True:
         data_requests = input("Data")
         if data_requests == "user":
            print(self.user)

         elif data_requests == "data":
             print(self.data)

         elif data_requests == "password":
              passw = input("Enter current password:")
              if passw == self.password:
                  print("Correct password")
                  print(self.password)
              else:
                print("Access denied")
         elif data_requests == "memory":
             print(self.memory)





    def terminal_start(self):
        import random, time

        user_name = input("Enter user:")
        password = input("Enter password:")

        while user_name != self.user or password != self.password:
            if user_name != self.user:
                user_name = input("Enter user again:")
                print("Incorrect")

            if password != self.password:
                password = input("Incorrect! Enter again:")

        for i in range(1, 10):
            print("Starting terminal...")
            time.sleep(2.5)

        usrmmand = input("Enter command:")

        while self.memory > 0 or usrmmand != "":
            usrmmand = input("Enter command:")

            if usrmmand == "get data":
                print("Getting data...")
                time.sleep(2.8)
                print({})
                for i in self.memory:
                    self.data.append(i)
                    print(self.data)

            if usrmmand == "files":
                fileOps = input("Enter what you want to do with the files?:")
                if fileOps == "create":
                    file_name = input("Enter file name:")
                    ext = input("Enter file extension:")
                    with open(f"{file_name}.{ext}", "a") as e:
                        print("File has been created")
                        self.memory -= 5

                elif fileOps == "read":
                    usr_path = input("Enter user path:")
                    with open(f"{usr_path}", "r") as z:
                        z.readlines()
                        self.memory -= 5

                elif fileOps == "write":
                    usr_path = input("Enter user path:")
                    if usr_path == "":
                        continue
                    with open(f"{usr_path}", "w") as y:
                        u = input("Text:")

                        y.write(u)
                        self.memory -= 5

                        if u == "":
                            y.write("-1")
                            print("No text written")
                            self.memory -= 5

                        else:
                            try:
                                usr_path = input("Enter user path:")

                            except ValueError:
                                print("INVALID")

            if usrmmand == "os":
                import os

                os_command = input("Enter OS command:")
                if os_command == "":
                    continue
                while os_command == "":
                    os_command = input("Enter OS command:")
                if os_command == "mkdir":
                    dir_name = input("Enter Name:")
                    os.mkdir(dir_name)
                    self.memory -= 2

                if os_command == "replace":
                    path1 = input("Enter the source path of file:")
                    path2 = input("Enter destination path of file:")
                    os.replace(path1, path2)
                    self.memory -= 5

                if os_command == "remove":
                    path = input("Enter filepath")
                    os.remove(path)
                    self.memory -= 5

                if os_command == "rmdir":
                    path = input("Enter path")
                    os.rmdir(path)
                    self.memory -= 5

                if os_command == "listdir":
                    path = input("Enter the path of the directory")
                    os.listdir(path)

            if usrmmand == "time":
                import time

                time_command = input("Time command:")
                if time_command == "":
                    continue
                if time_command == "current time now":
                    from datetime import datetime

                    n = datetime.now()
                    current_time = n.strftime("%H:%M:%S")
                    print("Current Time =", current_time)
                    self.memory -= 5

            if usrmmand == "create an array":
                arr = []
                i = 0
                values = int(input("Enter amount of values:"))
                while i < values:
                    arr.append(values)
                    i += 1
                    print(arr)
            if usrmmand == "create 2D array":
                arr = []
                i = 0
                values = int(input("Enter the amount of values:"))

                while i < values:
                    arr.append([i, i])
                    i += 1
                    print(arr)

            if usrmmand == "help":
                with open("help.txt", "r") as f:
                    f.readlines()

            if usrmmand == "games":
                game = int(input("Which game do you want (1, 2, 3):"))
                if game == 1:
                    random_number_guessing_game()

                elif game == 2:
                    words = [
                        "Apple",
                        "Orange",
                        "Data",
                        "Python",
                        "HTML",
                        "Java",
                        "C",
                        "C++",
                        "Arsenal",
                        "UCL",
                    ]
                    word_guessing_game(words=words)

                elif game == 3:
                    rock_paper_scissors()

            if usrmmand == "Easter egg" or "easter egg":
                with open("easteregg.txt", "r") as e:
                    e.readlines()

            if usrmmand == "quit":
                print("Quitting now...")
                time.sleep(5)
                quit()

            if usrmmand == "memory refresh":
                print("Refreshing memory...")
                time.sleep(5)
                self.memory = 0
                self.memory += 50

            if usrmmand == "memory amount":
                print("Getting memory amount...")
                time.sleep(5)
                print(self.memory)

            if usrmmand == "calculator":
                calculator()

            if usrmmand == "get more data":
                print("Getting more data...")
                time.sleep(3)
                arr = []
                i = 0
                values = int(input("Values:"))
                while i < values:
                    arr.append(i)
                    i += 1
                    print(arr)

            if usrmmand == "requests":
                import requests

                website = input("Enter website:")
                r = requests.get(website)
                print(r)

            if usrmmand == "":
                print("Empty command")
                continue

            if usrmmand == "values":
                r = input("Generate random value?:")
                if r == "yes" or "Yes":
                    value = random.randrange(1, 10000)
                    print(value)

                else:
                    print(-1)

            if usrmmand == "numpy":
                import numpy as np
                cm = input("Enter np:")
                if cm == "ones":

                   s = tuple(input("Enter shape:"))
                   arr = np.ones(s, dtype=None)
                   print(arr)

                elif cm == "array":
                   arr = list(input("Enter arr"))
                   res_arr = np.array(arr)
                   print(res_arr)

                elif cm == "2D array":
                    arr = list(input("Array:"))
                    res_arr = np.array([arr], [arr])
                    print(res_arr)

            if usrmmand == "attendance":
                attendances = []
                num_days = int(input("Days:"))
                attendance = int(input("Enter attendance:"))
                i = 1
                while i < num_days:
                    attendance = int(input("Enter attendance"))
                    attendances.append(attendance)
                    average = attendance[i] / num_days
                    i += 1

            if usrmmand == "refresh data":
                print("DATA refreshing..")
                time.sleep(3)


            if usrmmand == "quiz":
                quiz()







term = Terminal(memory=50, user="admin", password="123564(00)", data={})
term.terminal_start()
