#include <stdio.h>

// include this to use the engine
#include "bee-engine/bee-engine.h"

int main() {
    
    // write this to create square
    //height, width, 'char' 
    square(/*example*/ 6, 6, '#');
    printf("\n");

    // write this to create a circle, 
    // height and width can't be there
    circle(/*example*/ 'e');
    printf("\n");

    // write this to get plus. height and width can't be there.
    plus(/*example*/ 'o');

    return 0;
}