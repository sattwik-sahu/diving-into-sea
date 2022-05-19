/*
Name : Sattwik Kumar Sahu
Roll No. : 21241
Date : 2022-05-12
description: Find product of two large numbers not fitting in long long int
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#define MAXLEN 256

int main() {
  char str1[MAXLEN], str2[MAXLEN];
  printf("1st number:\t");
  scanf(" %s", str1);
  printf("2nd Number:\t");
  scanf(" %s", str2);

  int len1 = strlen(str1);
  int len2 = strlen(str2);

  // Store reversed array after converting char -> int
  int num1[MAXLEN], num2[MAXLEN];
  for (int i = (len1 > len2 ? len1 : len2) - 1, j = 0; i >= 0; i--, j++) {
    if (i < len1)
      num1[len1 - i] = str1[i] - '0';
    if (i < len2)
      num1[len2 - i] = str1[i] - '0';
  }

  int additionMatrix[MAXLEN][MAXLEN];
  int carry;
  for (int inx1 = 0; inx1 < len1; inx1++) {
    for (int i = 0; i < inx1; i++)
      additionMatrix[inx1][i] = 0;
    for (int inx2 = 0; inx2 < len2; inx2++) {
      int mult = num1[inx1] * num2[inx2];
      carry = mult % 10;
      additionMatrix[inx1][inx1 + inx2] = mult / 10;
      if (inx2 == len2 - 1 && carry > 0) {
        inx2++;
        additionMatrix[inx1][inx1 + inx2] = carry;
      }
      if (inx2 == len2 - 1)
        additionMatrix[inx1][inx1 + inx2 + 1] = -1;
    }
  }

  for (int i = 0; i < len1; i++) {
    for (int j = 0; additionMatrix[i][j] > -1; j++) {
      printf("%d ", additionMatrix[i][j]);
    }
    printf("\n");
  }

    // for (int i = len1 + len2; i >= 0; i--) {
    //   if (additionMatrix[i] > 0)
    //     break;
    // }

    // for (int i = 0; i >= 0; i--) {
    //   printf("%d", additionMatrix[i]);
    // }

    return 0;
}
