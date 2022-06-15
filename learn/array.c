#include <stdio.h>
#include <stdlib.h>

void printArray(int *array, int size) {
    // Print all elements in the array
    for (int i = 0; i < size;i++) {
        printf("[%d] -> %4d\n", i, array[i]);
    }
}

/*
* Name: Anushri Arun Pawar
* Roll No.: 21206
* Date: 2022-06-02
* Description: Contains utilities for inputting
    a square matrix and printing a square matrix
*/

int **getSquareMatrix(int dim) {
  int **mat;

  mat = (int **)malloc(dim * sizeof(int *));
  for (int i = 0; i < dim; i++)
      mat[i] = (int *) malloc(dim * sizeof(int));

  for (int i = 0; i < dim; i++) {
    for (int j = 0; j < dim; j++) {
      printf("mat[%d][%d] = ", i, j);
      scanf("%d", &mat[i][j]);
    }
    printf("\n");
  }

  return mat;
}

void printMatrix(int dim, int ** mat) {
    printf("[\n");
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++)
            printf("%4d", mat[i][j]);
        printf("\n");
    }
  printf("]\n\n");
  return;
}
