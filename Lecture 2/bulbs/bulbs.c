#include <cs50.h>
#include <stdio.h>
#include <string.h>


const int BITS_IN_BYTE = 8;

void print_bulb(int bit){

    if(bit == 0){
        printf("\U000026AB");
    } else if(bit == 1){
        printf("\U0001F7E1");
    }
}

int main(void){
    string message = get_string("Enter message: ");
    for (int y = 0; y<strlen(message); y++){
        unsigned char u = message[y];
        int bin[BITS_IN_BYTE];
        int quoti = u;
        int remain;

        for (int l =0; l<BITS_IN_BYTE; l++){
            remain = quoti % 2;
            bin[l] = remain;
            quoti /= 2;
        }

        for (int w = BITS_IN_BYTE - 1; w>=0; w--){
            print_bulb(bin[w]);
        }
        printf("\n");

    }
}
