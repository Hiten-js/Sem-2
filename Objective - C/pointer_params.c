/* 
============================================================================
                                 (◎﹏◎)
                           Pointer as Parameters
===========================================================================
*/

// Write a function using pointers to exchange the values stored in two
// locations in the memory.

#include <stdio.h>

void exchange(int *, int *);

int main()
{
    int x, y;
    x = 100;
    y = 200;

    printf("Before exchange : x = %d y = %d\n\n", x, y);
    exchange(&x, &y);
    printf("After exchange : x = %d y = %d\n\n", x, y);
}

void exchange(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}