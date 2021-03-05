/* 
============================================================================
                                (✿◡‿◡)
                            Length Of String
===========================================================================
*/

// Write a program to determine the GCD of two numbers.

#include <stdio.h>

void len(char *s)
{
    int length = 0;
    char *p;

    for (p = s; *p != '\0'; p++)
        length++;

    printf("Length of %s is %d \n", s, length);
}