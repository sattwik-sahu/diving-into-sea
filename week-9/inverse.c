#include <stdio.h>
#include <stdlib.h>

int **getSubmatrix(int dim, int **matrix, int remRow, int remCol) {
  int **susmat;

  susmat = (int **)malloc((dim - 1) * sizeof(int *));
  for (int i = 0; i < dim - 1; i++) {
    susmat[i] = (int *)malloc((dim - 1) * sizeof(int));
  }

  for (int i = 0; i < dim; i++)
    for (int j = 0; j < dim; j++)
      if (i != remRow && j != remCol)
        susmat[i - (i > remRow)][j - (j > remCol)] = matrix[i][j];

  return susmat;
}

int **getSquareMatrix(int dim) {
  int **mat;

  mat = (int **)malloc(dim * sizeof(int *));
  for (int i = 0; i < dim; i++)
    mat[i] = (int *)malloc(dim * sizeof(int));

  for (int i = 0; i < dim; i++) {
    for (int j = 0; j < dim; j++) {
      printf("mat[%d][%d] = ", i, j);
      scanf("%d", &mat[i][j]);
    }
    printf("\n");
  }

  return mat;
}

void printMatrix(int dim, float **mat) {
  printf("[\n");
  for (int i = 0; i < dim; i++) {
    for (int j = 0; j < dim; j++)
      printf("%10.4f", mat[i][j]);
    printf("\n");
  }
  printf("]\n\n");
  return;
}

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

float **getInverse(int dim, int **matrix) {
  float **inverse = (float **) malloc(dim * sizeof(float *));
  for (int i = 0; i < dim; i++)
    inverse[i] = malloc(dim * sizeof(float));
  float det = determinant(dim, matrix);
  
  for (int i = 0; i < dim; i++)
      for (int j = 0; j < dim; j++)
        inverse[j][i] = (((i + j) % 2 == 0)? 1 : -1)
            * determinant(dim - 1, getSubmatrix(dim, matrix, i, j))
            / det;

  return inverse;
}

int main() {
  int dim, **matrix;

  printf("Dimensions:\t");
  scanf("%d", &dim);

  printf("Enter %dx%d matrix:\n", dim, dim);
  matrix = getSquareMatrix(dim);

  if (determinant(dim, matrix) != 0) {
    float **inverse = getInverse(dim, matrix);
    printf("Inverse matrix is:\n");
    printMatrix(dim, getInverse(dim, matrix));
    for (int i = 0; i < dim; i++)
      free(inverse + i);
    free(inverse);
  } else {
      printf("Cannot calculate inverse of singular matrix");
  }

  for (int i = 0; i < dim; i++)
    free(matrix + i);
  free(matrix);
}
