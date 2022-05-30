/*
 * Name: Anushri Arun Pawar
 * Roll No.: 21206
 * Date: 2022-05-05
 * Description: Q1 of week 4 practical
 */
#include <stdio.h>

int main() {
  char seq[100], modi[100];
  printf("Enter string:\n");
  scanf("%[^*\n]", seq);

  printf("\n\nProcessed sequence:\n");

  int lastNonWhitespace = -1, modiInx = 0;
  for (int i = 0; i < 100; i++) {
    char currentChar = seq[i];

    // Terminate if * or null character
    if (currentChar == '\0' || currentChar == '*')
      break;

    // Convert to uppercase if lowercase
    else if (currentChar == 32) {
      if (lastNonWhitespace > -1)
        modi[modiInx++] = ' ';
      else
        continue;
    } else {
        char newChar = currentChar;
      if (currentChar >= 97 && currentChar <= 122) {
       newChar = currentChar - 32;
      }
      modi[modiInx++] = newChar;
      lastNonWhitespace++;
    }
  }



  printf("%s.", modi);

  return 0;
}