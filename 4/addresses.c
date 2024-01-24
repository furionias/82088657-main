#include <stdio.h>
#include <cs50.h>
int main(void){

   int n = 90;
   printf("%i", n);
    printf("%p\n", &n); // gets hexadecimal address of variable in memory

    int *p = &n; // pointer to the address of variable of n in memory
    printf("%p", p);
    printf("%i", *p); // return value at an addresss

    char *r = "KI"; // gets the address of the variable
    printf("%s\n", r);
    printf("%p\n", r);
    printf("%p\n", r[0]);
    printf("%p\n", r[1]);

    printf("%c\n", r[0]);

    printf("%c\n", *r);
    printf("%c\n", *(r+1));
    printf("%c\n", r+1);


}
