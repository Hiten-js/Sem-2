/* 
============================================================================
                              (*︾▽︾)
                           Static Variable
===========================================================================
*/

// Write a program to illustrate properties of Static variables.

#include <stdio.h>

void stat(void);

int main()
{
    int i;
    for (i = 1; i <= 3; i++)
        stat();
}

void stat(void)
{
    static int x = 0;

    x += 1;
    printf("x = %d \n", x);
}