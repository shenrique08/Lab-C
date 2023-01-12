#include <stdio.h>

void printArray(int *arr, int size) 
{
    for (int *p = arr; p < arr + size; p++) {
        printf("%d ", *p);
    }
    printf("\n");
}