#include <stdio.h>

void swap(char *p, char *q) {
  char temp = *p;
  *p = *q;
  *q = temp;
}

void permute(char *str, int argStart, int argEnd) {
  static int count = 0;
  // Terminating condition
  if (argStart == argEnd) {
    printf("%d -> %s\n", ++count, str);
  } else {
    for (int i = argStart; i <= argEnd; i++) {
      //   permute(str, argStart + 1, argEnd);
      swap(&str[argStart], &str[i]);
      permute(str, argStart + 1, argEnd);
      swap(&str[argStart], &str[i]);
    }
  }
}

int main() {
  char str[] = "bitch";
  permute(str, 0, 4);

  return 0;
}
