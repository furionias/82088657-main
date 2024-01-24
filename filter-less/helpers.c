#include "helpers.h"
#include <math.h>
// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int r =0; r < height; r++){
        for(int e =0; e < width; e++){
            int average = (int)((image[r][e].rgbtBlue + image[r][e].rgbtGreen + image[r][e].rgbtRed) / 3.0 + 0.5);

            image[r][e].rgbtBlue = average;
            image[r][e].rgbtGreen = average;
            image[r][e].rgbtRed = average;
        }
    }

}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int x =0; x <height; x++){
        for(int y =0; y<height; y++){
            int sepiaRed = image[x][y].rgbtRed;
            int sepiaGreen = image[x][y].rgbtGreen;
            int sepiaBlue = image[x][y].rgbtBlue;

            image[x][y].rgbtRed = fmin(255, (int)(0.393 * sepiaRed + 0.750 * sepiaGreen + 0.189 * sepiaBlue + 0.5));//red
            image[x][y].rgbtGreen = fmin(255, (int)(0.349 * sepiaRed + 0.686 * sepiaGreen + 0.168 * sepiaBlue + 0.5));//green
            image[x][y].rgbtBlue = fmin(255, (int)(0.272 * sepiaRed + 0.534 * sepiaGreen + 0.131 * sepiaBlue + 0.5));//blue

        }
    }
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{

    for (int t =0; t < height; t++){
        for(int w =0; w< width/2; w++){
            RGBTRIPLE temp = image[t][w];
            image[t][w] = image[t][width - 1 - w];
            image[t][width - 1 - w] = temp;
        }
    }

}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];

    for (int ix = 0; ix < height; ix++){
        for(int jx =0; jx < width; jx++){
            temp[ix][jx] = image[ix][jx];
        }

    }
    for(int i1 = 0; i1 < height; i1++){
        for (int j1 =0; j1<width;j1++){
            int totalRed =0, totalGreen =0, totalBlue =0;
            float counter = 0.00;

            for (int x1 =-1; x1< 2; x1++){
                for(int y1 = -1; y1 < 2; y1++){
                    int xcor = i1 + x1;
                    int ycor = j1 + y1;
                    if (xcor < 0 || xcor > (height -1) || ycor < 0 || ycor > (width -1)){
                        continue;
                    }
                    totalRed += image[xcor][ycor].rgbtRed;
                    totalGreen += image[xcor][ycor].rgbtGreen;
                    totalBlue += image[xcor][ycor].rgbtBlue;
                    counter ++;
                }
            }

           temp[i1][j1].rgbtRed = round (totalRed / counter);
           temp[i1][j1].rgbtGreen = round (totalGreen / counter);
           temp[i1][j1].rgbtBlue = round (totalBlue / counter);
        }
    }
   for (int u =0; u < height; u++){
      for (int q = 0; q < width; q++){
        image[u][q] = temp[u][q];
      }
   }
 return;

}
