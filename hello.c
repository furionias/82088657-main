#include <stdio.h>
#include <cs50.h>

int main(void){

    string answer = get_string("What is your name?");
    printf("Hello, world\n");
    printf("Hello %s\n", answer);

    string first = get_string("Enter your first name:");
    string last = get_string("Enter your last name:");

    printf("Hello, %s %s\n", first, last);
    printf("I got 100%%"); // %% - means one % sign
    return 0;
}
