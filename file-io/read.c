#include <stdio.h>

int main() {
  FILE *vimal = fopen("vimal.txt", "r");
  if (vimal == NULL) {
    printf("vimal file not found\n");
  } else {
    char c;
    while ((c = getc(vimal)) != EOF) {
      putchar(c);
    };
    printf("\n");
  }
    fclose(vimal);
  return 0;
}
