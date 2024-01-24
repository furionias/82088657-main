#include <stdio.h>
#include <cs50.h>
#include <math.h>

int multiplyalsoSum(int lastdigit){
     int multi = lastdigit *2;
     int sum =0;
     while(multi >0){
          int lastdigitmulti = multi %10;
          sum = sum + lastdigitmulti;
          multi = multi/ 10;

     }
     return sum;

}
int otherdigits(long creditcard){
     int totalsum =0;//sum
     bool altDigit = false;
     while(creditcard >0){ // while credit card is greater than 0
       if (altDigit == true){
        int lastdigit = creditcard % 10;// last digit is equal to credit card modulus 10
        int product = multiplyalsoSum(lastdigit);
        totalsum = totalsum + product;

     } else {
          int lastdigit = creditcard %10;
          totalsum = totalsum + lastdigit;
     }
        altDigit = !altDigit;
        creditcard = creditcard /10;
    }
    return totalsum;
}


int numdigits(long creditcard){
     int counter = 0;
     while (creditcard > 0){
          counter = counter + 1;
          creditcard = creditcard /10;
     }
     return counter;
}

bool isValidAMEX(long creditcard, int numDigits){
     int first_two_numbers = creditcard / pow(10, 13);
     if ((numDigits == 15) && (first_two_numbers == 34 || first_two_numbers == 37)){
          return true;
     }
     else {
        return false;
     }
}

bool isValid_Visa(long creditcard, int numDigits){

     if (numDigits == 13){
           int first = creditcard / pow(10, 12);
           if (first == 4){
               return true;
           }
     }
     else if(numDigits == 16) {
          int firstdigit = creditcard / pow(10, 15);
          if(firstdigit == 4){
               return true;
          } else{


          return false;
          }
     }
     return false;
}
bool isValid_MasterCard(long creditcard, int numDigits){
     int first_two_numbers = creditcard / pow(10, 14);
     if ((numDigits == 16) && (first_two_numbers > 50 && first_two_numbers < 56)){
          return true;
     }
     else {
        return false;
     }
}
int main(void){

     long creditcard = get_long("Enter Credit card:");
     int func1 = otherdigits(creditcard);
     int func2 = multiplyalsoSum(12);
     int func3 = numdigits(creditcard);
     bool func4_amex = isValidAMEX(creditcard, func3);
     bool func5_master = isValid_MasterCard(creditcard, func3);
     bool func6_visa = isValid_Visa(creditcard, func3);

     printf("%i\n", func1);
     if (func1 % 10 != 0){
          printf("INVALID\n");
          return 0;


     } else if(func4_amex == true){

          printf("AMEX\n");

     }else if (func5_master == true){
          printf("MASTERCARD\n");
     } else if(func6_visa == true){
            printf("VISA\n");

     } else{
          printf("INVALID\n");
          return 0;
     }



}


