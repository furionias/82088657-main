#include <cs50.h>
#include <stdio.h>
#include <string.h>
//argc = argumentcount
//argv =
int main(int argc, string argv[]){
    string name = get_string("Enter name:");
    printf("hello%s %s\n", argv[0], argv[2]);

    if (argc ==2){
        printf("hello %s\n" argv[1]);

    } else {
        printf("hello world\n");
    }
}
