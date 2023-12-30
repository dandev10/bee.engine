#include "square.h"

int square() {

    char x[3][3];

    x[0][0] = '#';
    x[0][1] = '#';
    x[0][2] = '#';
    x[1][0] = '#';
    x[1][1] = '#';
    x[1][2] = '#';
    x[2][0] = '#';
    x[2][1] = '#';
    x[2][2] = '#';

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c  ", x[i][j]);
        }
        
        printf("\n");
    }

    return 0; 
}