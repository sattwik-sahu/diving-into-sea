/*
 * Name: Sattwik Kumar Sahu
 * Roll No.: 21241
 * Date: 2022-05-05
 * Project: To print pyramid as given in Q3
 */

#include <stdio.h>

int main() {
  int n;
  printf("No. of rows? >> ");
  scanf("%d", &n);

  for (int row = 0; row < n; row++) {
    // No. of column to be printed is the n-th odd natural number
    int nCols = 2 * row + 1;

    // Print the spaces
    for (int i = 0; i < (n - row - 1); i++)
      printf(" ");

    // LCV goes from -row...0...+row
    for (int col = -row; col < row + 1; col++)
      // Print (nCols - abs(col)) % 10
      printf("%d", (nCols - ((col > 0) ? col : -col)) % 10);
    printf("\n");
  }

  return 0;
}
