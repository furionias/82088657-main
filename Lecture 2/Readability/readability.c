#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main(void){

    string user_text = get_string("Text:");
    int letters = 0;
    int words = 1;
    int sentences =0;
    for (int u =0; u<strlen(user_text); u++){
          if(isalpha(user_text[u])){
            letters++;
          } else if(user_text[u] == ' '){
             words++;
          } else if (user_text[u] == '.' || user_text[u] == '!' || user_text[u] == '?'){
            sentences+=1;
          }

    }
    float L1 = (float) letters / (float) words * 100;
    float S1 = (float) sentences / (float) words * 100;
    int index = round(0.0588 * L1 - 0.296 * S1 - 15.8);

    if(index < 1){
      printf("Before Grade 1\n");
    }

    else if (index > 16){;
      printf("Grade 16+\n");
    } else {
      printf("Grade %d\n", index);
    } 

}
