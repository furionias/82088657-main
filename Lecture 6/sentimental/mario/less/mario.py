
def get_prompt(prompt):
   while True:
      try:
         return int(input(prompt))
      except ValueError:
         print("Invalid input")



h1 = get_prompt("Height:")
while h1 < 1 or h1 > 8:
   print("Only between 1 and 8")
   height = get_prompt("Height:")

for i in range(1, h1+1):
      print(" "* (h1-i) + "#" * i)

