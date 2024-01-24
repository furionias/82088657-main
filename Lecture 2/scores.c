#include <stdio.h>
#include <cs50.h>

const int N = 5;
float average(int x[]);
int main(void){

    int score = 72;
    int score1 = 73;
    int score2 = 45;
    printf("The Average is %f\n", (score + score1 + score2) / (float) 3);

    int scores[4];
    scores[0] = 13;
    scores[1] = 63;
    scores[2] = 45;
    scores[3] = 99;


    printf("The average score is %f\n", (scores[0] + scores[1] + scores[2] + scores[3]) / (float) sizeof(scores));

    int scores1[N];
    //scores1[0] = get_int("Score:");
   // scores1[1] = get_int("Score:");
    //scores1[2] = get_int("Score:");
    //scores1[3] = get_int("Score:");
    //scores[4] = get_int("Score")

    for(int i =0; i<N; i++){
        scores[i] = get_int("Enter int:");
    }
    printf("The average score is %f\n", (scores1[0] + scores1[1] + scores1[2] + scores1[3]) / (float) sizeof(scores));
    printf("The average is %f",average(scores1, N));



}

float average(int x[], int length){

     for(int i = 0; i<length; i++){
        x[i] = get_int("Score %i", i);
     }

     int sum = 0;
     for(int j =0; j<N; j++){
        sum += x[j];
     }
     return sum / (float) N;
}
