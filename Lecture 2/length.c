#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){

    string name = get_string("Name:");

    int num =0;
    while (name[num] != '\0'){
        num++;
    }
    printf("%i\n", num);


    // Upper Case
    string before = get_string("Before:");
    printf("After:");

    for(int i = 0; n= strlen(before); i < n; i++){
        if (before[i] >= 'a' && before[i] <='z'){
            printf("%c", before[i] -32);
    }
    //C.type method
    if (islower(before[i])){
        printf("%c\n", isupper(before[i]));
    } else {
        printf("%c\n", before[i]);
    }
}
}
