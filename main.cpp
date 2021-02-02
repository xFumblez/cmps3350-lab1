// CMPS 3350 - lab 1
// Prints each command-line argument passed into the program, one per line
#include <stdio.h>

int main(int argc, char ** argv)
{
    for(int i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }
    return 0;
}

