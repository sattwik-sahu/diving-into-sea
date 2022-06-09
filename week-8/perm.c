#include <stdio.h>
#include <string.h>

/*
* Name : Anushri Arun Pawar
* Roll No.: 21206
* Description: Permutations of string
*/

void swap(char *p1, char *p2) {
    char temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void permutations(char *seq, int startInx, int endInx) {
  if (startInx == endInx)
    printf("%s\n", seq);
  else {
    for (int i = startInx; i <= endInx; i++) {
      swap((seq + startInx), (seq + i));
      permutations(seq, startInx + 1, endInx);
      swap((seq + startInx), (seq + i));
    }
  }
}

int main() {
  char str[] = "string";
  int n = strlen(str);
  permutations(str, 0, n - 1);
  return 0;
}
