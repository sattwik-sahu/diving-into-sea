#include <stdio.h>

int main() {
  FILE *vimal = fopen("vimal.txt", "a");
  if (vimal == NULL) {
    printf("vimal file not found\n");
  } else {
    int n;
    char kesari[] = "Bolo zubaan kesari\n";
    printf("Kitne baar kesari?\t");
    scanf("%d", &n);
    for (int i = 0; i < n;) {
      int j = 0;
      char c;
      while ((c = kesari[j++]) != '\0') {
        putc(c, vimal);
      }
      printf("%d baar kesari...\n", ++i);
    }
    fclose(vimal);
    return 0;
  }
}
