#include <stdio.h>
#include <stdlib.h>

int main(void){

    int list[4];
    list[0] = 4;
    list[1] = 6;
    list[2] = 7;
    list[3] = 90;

    for (int i =0; i<sizeof(list); i++){
        printf("%i\n", list[i]);
    }

    int *list2 = malloc(3 * sizeof(int));
    if(list2 == NULL){
        return 1;
    }
    list2[0] = 23;
    list2[1] = 78;
    list2[2] = 89;

    int *tmp = realloc(list, 4*sizeof(int));
    if(tmp == NULL){
        free(list2);
        return 1;
    }

    for(int y =0; y<3; y++){
        tmp[y] = list2[y];
    }
    list2[3] = 4;

    for (int u =0; u < sizeof(list2); u++)
    free(list2);
    list2 = tmp;
}
