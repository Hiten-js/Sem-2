/* 
============================================================================
                                    (+_+)?
                             Sum Of Array Elements
===========================================================================
*/

// Write a program using pointer to compute the sum of all elements
// stored in an array.

#include <stdio.h>

void arraySum()
{
    int *p;
    int sum, i = 0;

    int x[5] = {5, 9, 6, 3, 7};
    p = x;

    printf("Element    Value    Addresss \n");

    while (i < 5)
    {
        printf(" x[%d]       %d       %u  \n", i, *p, p);
        sum += *p;
        i++;
        p++;
    }

    printf("Sum    =  %d \n", sum);
    printf("&x[0]  =  %d \n", &x[0]);
    printf("p      =  %u \n", p);
}
