#include "circle.h"

int circle(char bob) {

    char x[4][4];

    x[0][0] = ' ';
    x[0][1] = bob;
    x[0][2] = bob;
    x[0][3] = ' ';
    x[1][0] = bob;
    x[1][1] = bob;
    x[1][2] = bob;
    x[1][3] = bob;
    x[2][0] = bob;
    x[2][1] = bob;
    x[2][2] = bob;
    x[2][3] = bob;
    x[3][0] = ' ';
    x[3][1] = bob;
    x[3][2] = bob;
    x[3][3] = ' ';
    

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%c  ", x[i][j]);
        }
        
        printf("\n");
    }

    return 0; 
}