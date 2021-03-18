/* 
============================================================================
                                    ^.^
                             Pointer Arithmetic
===========================================================================
*/

// Write a program to illustrate the use of pointers in arithmetic
// operations.

#include <stdio.h>

void pointerArithmetic()
{
    int a, b, *p1, *p2, x, y, z;
    a = 12;
    b = 4;

    p1 = &a;
    p2 = &b;

    x = (*p1) * (*p2) - 6;
    y = 4 * (-*p2) / *p1 + 10;

    printf("Address of a = %u\n", p1);
    printf("Address of b = %u\n", p2);
    putchar('\n');

    printf("a = %d, b = %d \n", a, b);
    printf("x = %d, y = %d \n", x, y);
    putchar('\n');

    *p2 += 3;
    *p1 -= 5;

    z = (*p1) * (*p2) - 6;
    printf("a = %d, b = %d, ", a, b);
    printf("z = %d \n", z);
}
