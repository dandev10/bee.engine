#include "plus.h"

int plus(char bob) {
    char x[5][5];

    x[0][0] = ' ';
    x[0][1] = bob;
    x[0][2] = ' ';
    x[1][0] = bob;
    x[1][1] = bob;
    x[1][2] = bob;
    x[2][0] = ' ';
    x[2][1] = bob;
    x[2][2] = ' ';
   
   
    
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", x[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}