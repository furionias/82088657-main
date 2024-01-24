#include <stdio.h>
#include <cs50.h>

int main(void){

    int startsize;

    do{
       startsize = get_int("Enter starting population:");
    } while(startsize < 9);

    int endsize;

    do{
        endsize = get_int("End population size:");
    } while(startsize > endsize);

    int numyears=0;

    do{
      startsize = startsize + (startsize/3) - (startsize/4);
      numyears++;
    }while(startsize < endsize);
    printf("Number of Years: %i\n", numyears);
}
