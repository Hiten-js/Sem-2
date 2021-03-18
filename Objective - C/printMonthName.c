/* 
============================================================================
                                 →_→
                              Month Name
===========================================================================
*/

// Write a program that take month number as input and returns the
// corresponding name of that month.

#include <stdio.h>

char month[12][20] =
    {"January", "February", "March", "April",
     "May", "June", "July", "August", "September",
     "October", "November", "December"};

char *printMonthName()
{
    int m;

    printf("Enter Month Number: ");
    scanf("%d", &m);

    printf("The month is %s \n", month[m - 1]);
    return month[m - 1];
}
