#include <stdio.h>
#define MAXDIM 1024

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

/*
* Calculates determinant of matrix by multiplying
* elements of the 1st row by the corresponding
* cofactors.
* Cofactors are calculated by recursive determinant
*/
double determinant(int dimension, double matrix[MAXDIM][MAXDIM]) {
  if (dimension == 1)
    return matrix[0][0];

  double det = 0;
  for (int row = 0; row < dimension; row++) {
    double subMatrix[dimension][dimension];
    for (int i = 0; i < dimension; i++) {
      if (i != row)
        for (int j = 0; j < dimension; j++) {
          if (j == 0)
            continue;
          subMatrix[i > row ? i - 1 : i][j - 1] = matrix[i][j];
        }
    }
    if (matrix[row][0] != 0) {
      double addDet =
          matrix[row][0] * ((row % 2 == 0) ? 1 : -1) *
          ((dimension == 2) ? subMatrix[0][0]
                            : determinant(dimension - 1, subMatrix));
      det = addDet + det;
    }
  }
  return det;
}
