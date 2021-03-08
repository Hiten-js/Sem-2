/* 
============================================================================
                               ( $ _ $ )
                              Bubble Sort
===========================================================================
*/

// Write a program that uses a function to sort an array of integers.

void sort(int arr[], int length)
{
    int i, j, temp;

    for (i = 1; i < length - 1; i++)
    {
        for (j = 1; j < length - 1; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}