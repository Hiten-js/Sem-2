/* 
============================================================================
                                (⊙ｏ⊙）
                       Round to two decimal places
===========================================================================
*/

// Write a program that take floating point value as input and returns
// its value rounded to two nearest decimal places.

#include <stdio.h>
#include <math.h>

double roundToTwo(float x)
{
    // round() alternative:
    // int number = x * 100 + 0.5;
    double rounded = round(x * 100) / 100;
    return rounded;
}
