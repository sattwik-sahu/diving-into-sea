/*
* Name: Anushri Arun Pawar
* Roll No.: 21206
* Date: 2022-05-12
* Description: Add two large numbers not fitting in long long int
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 1024

int main() {
  char str1[MAX_LEN], str2[MAX_LEN];
  printf("n1?\t");
  scanf("%s", str1);
  printf("n2?\t");
  scanf("%s", str2);

  int l1 = strlen(str1), l2 = strlen(str2);

  int maxDigits = ((l1 > l2) ? l1 : l2);
  int minDigits = ((l1 < l2) ? l1 : l2);
  int padding = maxDigits - minDigits;
  int carry = 0;

  // printf("max & min digits = %d, %d\n\n", maxDigits, minDigits);

  int n1[maxDigits], n2[maxDigits];
  for (int i = 0; i < maxDigits; i++) {
    if (i < padding) {
      if (l1 < l2) {
        n1[i] = 0;
        n2[i] = str2[i] - '0';
      } else if (l2 < l1) {
        n2[i] = 0;
        n1[i] = str1[i] - '0';
      }
    } else {
      if (l1 <= l2) {
        n1[i] = str1[i - padding] - '0';
        n2[i] = str2[i] - '0';
      } else if (l2 < l1) {
        n1[i] = str1[i] - '0';
        n2[i] = str2[i - padding] - '0';
      }
    }
  }

  for (int i = 0; i < maxDigits; i++) {
    printf("%d %d\n", n1[i], n2[i]);
  }

  int sum[maxDigits + 1];
  for (int i = maxDigits; i > 0; i--) {
    int digit1 = n1[i - 1], digit2 = n2[i - 1];
    printf("%d + %d + %d | ", digit1, digit2, carry);
    sum[i] = (digit1 + digit2 + carry);
    carry = sum[i] >= 10;
    sum[i] = sum[i] % 10;
    printf("write = %d | carry = %d\n", sum[i], carry);
  }
  if (carry > 0)
    sum[maxDigits] = carry;

  for (int i = 0; i < maxDigits + 1; i++) {
    if ((i == maxDigits - 1 && sum[i] == 0) || (sum[i] > 9 || sum[i] < 0))
      continue;
    printf("%d ", sum[i]);
  }

  printf("\n");
  return 0;
}
