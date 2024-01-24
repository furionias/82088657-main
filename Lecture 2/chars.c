#include <stdio.h>
#include <cs50.h>

int main(void){
    char c1 = 'w';
    char c2 = 'e';
    char c3 = 'r';
    string hello = "Hello";
    string bye = "Bye";
    string words[2];
    words[0] = "hello2";
    words[1]= "Asriel";

    printf("%c%c%c\n",c1, c2, c3);
    printf("%i%i%i\n",c1, c2, c3);
    printf("%c%c%c\n",c1, c2, c3);
    printf("%c%c%c\n",words[0][1], words[0][2]);
    printf("%c%c%c\n",words[1][0], words[1][1], word[1][2]);
}
