/* 
============================================================================
                                 ::>_<::
                             Use of Malloc 
===========================================================================
*/

// Write a program to store a character string in a block of memory space
// created by malloc and then modify the same to store a larger string.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

int main()
{
    char *buffer;

    if ((buffer = (char *)malloc(10)) == 0)
    {
        printf("malloc failed.\n");
        exit(1);
    }

    printf("Buffer of size %u created \n", _msize(buffer));
    strcpy(buffer, "HYDERABAD");
    printf("\nBuffer contains: %s \n ", buffer);

    if ((buffer = (char *)realloc(buffer, 15)) == 0)
    {
        printf("Reallocation failed. \n");
        exit(1);
    }

    printf("\nBuffer size modified. \n");
    printf("\nBuffer still contains: %s \n", buffer);
    strcpy(buffer, "SECUNDERABAD");
    printf("\nBuffer now contains: %s \n", buffer);

    free(buffer);
}