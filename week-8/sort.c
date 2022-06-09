#include <stdio.h>
#include <stdlib.h>

/*
 * Name: Anushri Arun Pawar
 * Roll No.: 21206
 * Description: Sort an array in descending order
 */

void swap(int *p1, int *p2) {
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}

void sort(int size, int *arr) {
  for (int i = 0; i < size - 1; i++) {
    int argmin = i;
    for (int j = i; j < size; j++) {
      if (arr[j] < arr[argmin])
        argmin = j;
    }
    swap(arr + i, arr + argmin);
  }
}

int main() {
  int n;
  printf("No. of elements?\t");
  scanf(" %d", &n);
  int *array = (int *)calloc(n, sizeof(int));
  for (int i = 0; i < n; i++) {
    printf("elemt %d -> ", i);
    scanf("%d", &array[i]);
  }
  printf("\nArray =\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  sort(n, array);

  printf("\nSorted array:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}
