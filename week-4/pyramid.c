/*
 * Name: Sattwik Kumar Sahu
 * Roll No.: 21241
 * Date: 2022-05-05
 * Project: To print pyramid as given in Q3
 */

#include <stdio.h>

int absolute(int x) {
  return (x > 0) ? x : -x;
}

int main() {
  int n;
  printf("No. of rows? >> ");
  scanf("%d", &n);

  for (int row = 0; row < n; row++) {
    int nCols = 2 * row + 1;
    for (int i = 0; i < (n - row - 1); i++)
      printf(" ");
    for (int col = -row; col <= row; col++)
      printf("%d", (nCols - ((col > 0) ? col : -col)) % 10);
    printf("\n");
  }

  return 0;
}
