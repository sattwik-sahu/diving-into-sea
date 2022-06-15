#include "swap.c"
#include <stdio.h>
#include <string.h>

/*
* Name : Sattwik Kumar Sahu
* Roll No.: 21241
* Description: Print all permutations of a given string
* with duplicates allowed 
*/

void swapChar(char *p1, char *p2);

/*
* Print all permutations of a string
* l = starting index
* r = ending index
*/
void permute(char *a, int l, int r) {
  int i;
  if (l == r)
    printf("%s\n", a);
  else {
    for (i = l; i <= r; i++) {
      swapChar((a + l), (a + i));
      permute(a, l + 1, r);
      swapChar((a + l), (a + i));
    }
  }
}

int main() {
  char str[] = "PERM";
  int n = strlen(str);
  permute(str, 0, n - 1);
  return 0;
}
