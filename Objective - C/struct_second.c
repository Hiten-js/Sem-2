/* 
============================================================================
                                  (¬‿¬)
                              Struct Example
===========================================================================
*/

// Write a program to calculate the subject-wise and student-wise
// totals and store them using struct.

#include <stdio.h>

struct marks
{
    int sub[3];
    int total;
};

struct marks student[3] = {45, 67, 81, 0, 75, 53, 69, 0, 57, 36, 71, 0};
struct marks total;

void calcTotal()
{
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            student[i].total += student[i].sub[j];
            total.sub[j] += student[i].sub[j];
        }
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

    for (int i = 0; i <= 2; i++)
        printf("SUBJECT %d         %d \n", i + 1, total.sub[i]);
    putchar('\n');

    printf("GRAND TOTAL = %d", total.total);
    putchar('\n');
}
