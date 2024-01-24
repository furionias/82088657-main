#include <stdio.h>
#include <cs50.h>


static void numberComparison(int x , int y){

    if(y > x){
        printf("y is greater than x\n");
    } else if (x > y){
        printf("x is greater than y\n");
    }

}
static void numberComparison2(){

    int num1 = get_int("Enter value for x\n");
    int num2 = get_int("Enter a value for y\n");

    if(num1 > num2){
        printf("%i is bigger than %i", num1, num2);
    } else if(num2 > num1){
        printf("%i is bigger than %i", num2, num1);
    } else{
        printf("%i is equal to %i", num1, num2);
    }

}
int main(void){

    int x = get_int("Enter first int:");
    int y = get_int("Enter second integer:");

    if(x > y){
        printf("%d is greater than %d\n", x, y);
    } else if(x < y){
        printf("%d is greater than %d", y, x);
    }
    numberComparison(9, 89);
    numberComparison2();


    return 0;
}
