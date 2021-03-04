/* 
============================================================================
                                    ✪ ω ✪
                              Display Number Ladder
===========================================================================
*/

// Write a program that display the following pattern.
//     1
//     1 2
//     1 2 3
//     1 2 3 4
//     1 2 3 4 5

#include <stdio.h>

void printLadder()
{
    int i, j, n;

    printf("Enter The Number Of Lines: ");
    scanf("%d", &n);
    putchar('\n');

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        putchar('\n');
    }
}
