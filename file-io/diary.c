#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void writeToDiary(char *entry) {
  FILE *diary = fopen("diary.txt", "a");
  if (diary == NULL) {
    FILE *d = fopen("diary.txt", "w");
    fclose(d);
  }
  for (int i = 0; i < strlen(entry); i++)
    putc(entry[i], diary);
  putc('\n', diary);
  for (int i = 0; i < 20; i++) {
    putc('=', diary);
  }
  putc('\n', diary);
  fclose(diary);
}

int main() {
  int i = 0, size = 1;
  char *entry = (char *)malloc(100 * sizeof(char));
  char c;
  printf("Create entry:\n");
  while ((c = getchar()) != '\n') {
    if (c != '\n') {
      if (i == size)
        entry = realloc(entry, size += 10);
      entry[i++] = c;
    }
  }
  printf("%s >> diary.txt\n", entry);
  writeToDiary(entry);
  printf("Sizeof entry = %ld; Len entry = %ld; size = %d\n", sizeof(entry), strlen(entry), size);
  return 0;
}
