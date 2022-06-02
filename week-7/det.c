#include "submat.c"
#include "util.c"
#include <stdio.h>
#include <stdlib.h>

/*
 * Name: Sattwik Kumar Sahu
 * Roll No.: 21241
 * Date: 2022-06-02
 * Description: Calculate determinant of matrix
 */

int **getSquareMatrix(int dim);
void printMatrix(int dim, int **mat);
int **getSubmatrix(int dim, int **matrix, int remRow, int remCol);

int determinant(int dim, int **matrix) {
  if (dim == 1)
    return matrix[0][0];

  int det = 0;
  for (int i = 0; i < dim; i++) {
    det += matrix[0][i] *
           determinant(dim - 1, getSubmatrix(dim, matrix, 0, i)) *
           (i % 2 == 0 ? 1 : -1);
  }

  return det;
}

int main() {
  int dim, **matrix;

  printf("Dimensions:\t");
  scanf("%d", &dim);

  printf("Enter %dx%d matrix:\n", dim, dim);
  matrix = getSquareMatrix(dim);

  printf("Your matrix =\n");
  printMatrix(dim, matrix);
  printf("\n");

  printf("Det(matrix) = %d", determinant(dim, matrix));
}
