class Gamedata():

    def __init__(self, user):
        self.user = user

y = Gamedata(user="{user enter here}")
class Game1(Gamedata):

    def __init__(self, objects, tries, user):
        self.objects = objects
        self.tries = tries
        super().__init__(user)

    def gameStart(self):
        pass





    def Room1(self):
           print("Welcome to the game")

           print("You begin in a dark, cold room")
           print("You aim to progress forward")

           notEscaped = True
           while notEscaped == True and self.tries < 3:
             print("What do you do?")
             ix = input("")
             if ix == "choose an item" or "choose an object":
                print(self.objects)
                object_choice = input("enter object")

                if object_choice not in self.objects:
                  print(-1)
                  self.tries += 1

                elif object_choice == "torch":
                   print("You have used the torch")
                   print("You can now see more clearly")
                   self.tries +=1

                elif object_choice == "pickaxe":
                  ui = input("How do you want to use the object?:")
                  if ui == "mine the walls":
                    direction = input("Enter which direction")
                    if direction == "north":
                        print("Well Done! you have escaped")
                        notEscaped = False


                    elif direction == "south":
                        print("You cannot go southward")
                        self.tries += 1



    def Room2(self):
            notEscaped = True
            while notEscaped == True:
                print("You have arrived at the next room")
                print("It seems quite comfortable and there is a peculiar door")
                print("What do you do?")
                p = input("Enter:")
                if p == "object":
                  print(self.objects)
                  object_choice = input("Enter: ")

                  if object_choice not in self.objects:
                    return "No relevant object"

                  if object_choice == "key":
                    print("You have used the key on the door")
                    print("It opens")
                    print("You progress forward")
                    notEscaped = False

                  else:
                    print("Not a useful object")




    def Room3(self):
            notEscaped = True
            while notEscaped == True:
               print("You have reached the final room!")
               print("A cold, dark, icy throne room")
               yt = input("What do you do?:")
               if yt == "object":
                object_choice = input("Enter object:")

                if object_choice not in self.objects:
                    return "No such object"

                if object_choice == "torch":
                    print("You have used the torch!")
                    print("It illuminates your way")
                    io = input("Move forward?:")
                    self.tries += 1
                    if io == "yes":
                        import time
                        print("You move forward")
                        print("You see something shimmer ")
                        print("...")
                        time.sleep(5)
                        print("It is the holy sword")
                        print("You have completed your quest")
                        notEscaped = False

                if object_choice == "pickaxe":
                    print("The item is useless for your current situation")
                    self.tries += 1

                else:
                    return "Irrevelant object"




ir = Game1(objects=["pickaxe", "torch", "key", "sword"], tries=0, user="Asriel")
ir.Room1()
print(ir.Room2())
print(ir.Room3())






