/* 
============================================================================
                                 (￣(工)￣)
                        Access the value of pointer
===========================================================================
*/

// Write a program to access the value pointed to by a pointer.

#include <stdio.h>

void valueAtPointer()
{
    int x, y;
    int *ptr;

    x = 10;
    ptr = &x;
    y = *ptr;

    printf("Value of x is %d \n\n", x);
    printf("%d is stored at address %u \n", x, &x);
    printf("%d is stored at address %u \n", *&x, &x);
    printf("%d is stored at address %u \n", *ptr, ptr);
    printf("%d is stored at address %u \n", ptr, &ptr);
    printf("%d is stored at address %u \n", y, &y);

    *ptr = 25;
    printf("\nNow x = %d", x);
}