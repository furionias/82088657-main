

def get_integer(prompt):

  try:
     return(int(prompt))

  except ValueError as e:
     print("Invalid")






def checksum(c_c_n):

   sum =0

   for i in range(len(str(c_c_n))):
      if ((i % 2 == 0)):
         sum += c_c_n %10
      else:
         digit = 2 * (c_c_n % 10)
         sum += digit // 10 + digit % 10

      c_c_n //= 10

   sum % 10 == 0


def check_validity(c_c_n):
   return checksum(c_c_n)

def output_brand(c_c_n):

   if (c_c_n >= 34e13 and c_c_n < 35e13) or (c_c_n >= 37e13 and c_c_n < 38e13):
      print("AMEX")

   elif c_c_n >= 51e14 and c_c_n < 56e14:
      print("MASTERCARD")

   elif (c_c_n >= 4e12 and c_c_n < 5e12) or (c_c_n >= 4e15 and  c_c_n < 5e15):
      print("VISA")

   else:
      print("INVALID")

def luhns():
   while True:
      credit_card = int(input("Enter number:"))
      if credit_card >=0:
        break

   if check_validity(credit_card):
      output_brand(credit_card)
   else:
      print("INVALID")

luhns()
