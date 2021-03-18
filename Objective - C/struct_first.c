/* 
============================================================================
                               ヽ(✿ﾟ▽ﾟ)ノ
                              Struct Example
===========================================================================
*/

// Write a program to calculate the subject-wise and student-wise
// totals and store them using struct.

#include <stdio.h>

struct marks
{
    int sub1, sub2, sub3;
    int total;
};

struct marks student[3] = {
    {45, 67, 81, 0},
    {75, 53, 69, 0},
    {57, 36, 71, 0},
};
struct marks total;

void calcTotal()
{
    for (int i = 0; i <= 2; i++)
    {
        student[i].total = student[i].sub1 +
                           student[i].sub2 +
                           student[i].sub3;

        total.sub1 += student[i].sub1;
        total.sub2 += student[i].sub2;
        total.sub3 += student[i].sub3;
        total.total += student[i].total;
    }
}

void printTotal()
{
    printf("STUDENT          TOTAL \n\n");
    for (int i = 0; i <= 2; i++)
        printf("Student[%d]       %d \n", i + 1, student[i].total);
    putchar('\n');

    printf("SUBJECT          TOTAL \n\n");
    printf("SUBJECT 1         %d \n", total.sub1);
    printf("SUBJECT 2         %d \n", total.sub2);
    printf("SUBJECT 3         %d \n", total.sub3);
    putchar('\n');

    printf("GRAND TOTAL = %d", total.total);
    putchar('\n');
}
