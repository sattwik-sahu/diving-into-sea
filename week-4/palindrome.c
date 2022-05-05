/*
 * Name: Sattwik Kumar Sahu
 * Roll No.: 21241
<<<<<<< HEAD
<<<<<<< HEAD
 * Date: 2022-05-05
=======
 * Date: 2022-05-04
>>>>>>> 7d17553 (Week-4 Q2,3,4)
=======
 * Date: 2022-05-05
>>>>>>> 39e32a9 (Created Q1 program)
 * Project: Check is string is a palindrome
 */

#include <stdio.h>
#include <string.h>
#define MAXLEN 128

int isPalindrome(char s[]) {
  // Get string length
  int len = strlen(s);
  // Traverse half the string
  for (int i = 0; i <= len / 2; i++) {
    // Check if i-th and i-th last char unequal
    if (s[i] != s[len - i - 1])
      return 0;
  }
  return 1;
}

int main() {
  char s[MAXLEN];
  printf("Enter string:\n");
  scanf("%[^\n]", s);

  if (isPalindrome(s))
    printf("%s is a palindrome\n", s);
  else
    printf("%s is not a palindrome\n", s);

  return 0;
}
