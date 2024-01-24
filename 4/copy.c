#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

    char *s = get_string("s:");
    char *t =s;
    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    char *e = get_string("s:");
    if (s == NULL){
        return 1;
    }
    char *t = malloc(strlen(e) +1); // malloc - allocates memory (e.g here 4 bytes)

    if (t==NULL){
        return 1;
    }

    for (int i = 0, n = strlen(e)+1; i < n; i++){
        t[i] = e[i]
    }
    //Alternative
    strcpy(t, s);
    if (strlen(t) > 0){
        e[0].toupper()
    }

    printf("%p\n", e);
    printf("%p\n", t);

    free(t); //free() - frees memory in program

    return 0;
}
