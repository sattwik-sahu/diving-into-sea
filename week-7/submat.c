#include <stdlib.h>

/*
* Name: Sattwik Kumar Sahu
* Roll No.: 21241
* Date: 2022-06-02
* Description: Calculates submatrix of given matrix
    by removing given row and column
*/
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
