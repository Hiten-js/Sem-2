/* 
============================================================================
                                  ┗( T﹏T )┛
                                Floyd Triangle
===========================================================================
*/

// Write a program that display the floyd triangle given below.
//     1
//     0 1
//     1 0 1
//     0 1 0 1
//     1 0 1 0 1

#include <stdio.h>

void printFloyd()
{
    int i, j, rows;

    printf("Enter The Number Of Rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        putchar('\n');
    }
}
