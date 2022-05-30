#include <stdio.h>
#define MAXDIM 1024

/*
* Name: Anushri Arun Pawar
* Roll No.: 21206
* Description: Determinant
*/

double determinant(int dimension, double matrix[][MAXDIM]);
void printMatrix(int dim, double matrix[][MAXDIM]);

int main() {
  double mat[][1024] = {
      {2, 4, -3, -1}, {2, 1, -1, -1}, {0, -4, 0, 7}, {-8, 6, 0, 2}};
  printMatrix(4, mat);
  printf("Determinant = %f\n", determinant(4, mat));
  return 0;
}

void printMatrix(int dim, double matrix[][MAXDIM]) {
  printf("[\n");
  for (int i = 0; i < dim; i++) {
    for (int j = 0; j < dim; j++) {
      printf("%8.3f ", matrix[i][j]);
    }
    printf("\n");
  }
  printf("]\n");
}

double determinant(int dimension, double matrix[MAXDIM][MAXDIM]) {
  printf("Dimension = %d\n\n", dimension);
  printMatrix(dimension, matrix);
  if (dimension == 1) {
    printf("Non-zero single elemt det %f\n", matrix[0][0]);
    return matrix[0][0];
  }

  double det = 0;
  // put dimension instead of 1 here...
  for (int row = 0; row < dimension; row++) {
    double subMatrix[dimension][dimension];
    for (int i = 0; i < dimension; i++) {
      if (i != row)
        // printf("In row %d\n", i);
        for (int j = 0; j < dimension; j++) {
          if (j == 0)
            continue;
          subMatrix[i > row ? i - 1 : i][j - 1] = matrix[i][j];
          // printf("v[%d][%d] = matrix[%d][%d] = %.3f\n", i > row ? i - 1 : i,
          //        j - 1, i, j, matrix[i][j]);
        }
    }
    // printf("v[2][0] = %.3f\n", subMatrix[2][0]);
    // printMatrix(dimension - 1, subMatrix);
    if (matrix[row][0] != 0) {
      double addDet =
          matrix[row][0] * ((row % 2 == 0) ? 1 : -1) *
          ((dimension == 2) ? subMatrix[0][0]
                            : determinant(dimension - 1, subMatrix));
      printf("%6.3f + %6.3f", addDet, det);
      det = addDet + det;
      printf("submatrix det thing  =  %f\n",
             ((dimension == 2) ? subMatrix[0][0]
                               : determinant(dimension - 1, subMatrix)));
    }
  }
  return det;
}
