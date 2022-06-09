#include <stdio.h>
#include <stdlib.h>
#include "swap.c"

/*
* Name: Sattwik Kumar Sahu
* Roll No.: 21241
* Description: Sort an array in descending order
*/

void swapInt(int *p1, int *p2);

void sort(int size, int *arr) {
    for (int i = 0; i < size - 1; i++) {
        int argmax = i;
        for (int j = i; j < size; j++) {
            if (arr[j] > arr[argmax])
                argmax = j;
        }
        swapInt(arr + i, arr + argmax);
    }
}

void printArray(int size, int *arr) {
    printf("[ ");
    for (int i = 0; i < size; i++) {
        printf("%3d ", arr[i]);
    }
    printf(" ]\n");
}

int main() {
    int size;
    printf("Size of array?\t");
    scanf(" %d", &size);
    printf("-------------------");
    int *arr = (int *) calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", arr + i);
    }
    printf("\nOriginal array:\n");
    printArray(size, arr);
    sort(size, arr);
    printf("\nSorted [DESC] array:\n");
    printArray(size, arr);

    return 0;
}
