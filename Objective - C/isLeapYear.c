/* 
============================================================================
                                  ←_←
                            Check Leap Year
===========================================================================
*/

// Write a program that check whether the year is leap year or not.

#include <stdio.h>

void isLeapYear(int year)
{
    int isLeap = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));

    if (isLeap)
        printf("%d is a leap year.", year);
    else
        printf("%d is not a leap year.", year);

    putchar('\n');
}
