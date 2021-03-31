/* 
============================================================================
                                 (^///^)
                             Call By reference 
===========================================================================
*/

// Write a program to show how to calculate the sum of two numbers
// which are passed as arguments using the call by reference method.

#include <stdio.h>

void swap(int *p, int *q);

int main()
{
    int x = 0;
    int y = 20;
    printf("\nValue of X and Y before swapping are X=%d and Y=%d", x, y);
    swap(&x, &y);
    printf("\n\nValue of X and Y after swapping are X=%d and Y=%d", x, y);
}

void swap(int *p, int *q)
{
    int r;
    r = *p;
    *p = *q;
    *q = r;
}
