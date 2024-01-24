#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

#define BLOCK_SIZE 512
int main(int argc, char *argv[])
{
    if(argc != 2){
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }

    char *file = argv[1];
    FILE *raw_file = fopen (file, "r");
    if(raw_file == NULL){
        printf("Could not open %s.\n", file);
        return 1;
    }

    bool jpg_found = false;
    int jpg_counter = 0;
    uint8_t buffer[BLOCK_SIZE];
    char jpg_name[8];
    FILE *outptr = NULL;

    while (fread(buffer, BLOCK_SIZE, 1, raw_file) == 1){
        if((buffer[0]) == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0){
            if(jpg_found){
                fclose(outptr);
            }
            else{
                jpg_found = true;
            }
        sprintf(jpg_name, "%03d.jpg", jpg_counter);
        outptr = fopen(jpg_name, "w");
        if (outptr == NULL){
            fclose(raw_file);
            printf("Could not create %s. \n", jpg_name);
            return 3;
        }
        jpg_counter++;

        }
        if(jpg_found){
            fwrite(buffer, BLOCK_SIZE, 1, outptr);
        }
    }
        fclose(raw_file);
        if(jpg_found){
            fclose(outptr);
        }
        return 0;


    }






