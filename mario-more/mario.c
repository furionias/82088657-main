#include <cs50.h>
#include <stdio.h>



static void Pyramid(){
  int height;
  do{
    height = get_int("Height:");// asks for height


  } while (height <=0 || height > 8);

  for(int in1 = 0; in1<height; in1++){
    for(int ji = 0; ji < height; ji++){
        if(in1+ji < height -1){
            printf(" ");
        }
        else {
            printf("#");
        }
    }
    printf("  ");
    for(int p =0; p <in1+1; p++){
        printf("#");
    }
    printf("\n");
  }

}


int main(void)
{




    Pyramid();
}
