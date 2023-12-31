#include "square.h"
  

int square(int width, int height, char bob) {
    // char x[10][10];

    // x[0][0] = '#';
    // x[0][1] = '#';
    // x[0][2] = '#';
    // x[0][3] = '#';
    // x[1][0] = '#';
    // x[1][1] = '#';
    // x[1][2] = '#';
    // x[1][3] = '#';
    // x[2][0] = '#';
    // x[2][1] = '#';
    // x[2][2] = '#';
    // x[2][3] = '#';
    // x[3][0] = '#';
    // x[3][1] = '#';
    // x[3][2] = '#';
    // x[3][3] = '#';

    
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("%c ", bob);
        }
        
        printf("\n");
    }

    return 0; 
}