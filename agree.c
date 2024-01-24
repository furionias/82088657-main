#include <stdio.h>
#include <cs50.h>

int main(void){

    char tCs = get_char("Do you agree to terms and conditions?:");
    if(tCs == 'a' || 'A'){
        printf("You have agreed");

    } else if(tCs == 'A'){
        printf("You have agreed");

    }
    else{
        printf("You have refused the terms of conditions");
    }
}
