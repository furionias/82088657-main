#include <cs50.h>
#include <stdio.h>

int main(void){

    int i = get_int("Enter:")
    int j = get_int("Enter:")

    if (strcmp(i, j) == 0){
        printf("Same\n");
    } else{
        printf("Different");
    }

    string s = get_string("S:");
    string t = get_string("T:")

    //Gets the address of s and t
    printf("%p\n", s);
    printf("%p\n", t)
}
