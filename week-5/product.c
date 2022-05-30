#include <stdio.h>
#include <string.h>

/*
* Name: Anushri Arun Pawar
* Roll No.: 21206
* Description: Product of two numbers
*/


char *multiply(char num1[100], char num2[100]) {
  int len1 = strlen(num1);
  int len2 = strlen(num2);
  if (len1 == 0 || len2 == 0)
    return "0";

  // will keep the result number
  // in reverse order
  int result[200];

  // Below two indexes are used to find positions
  // in result.
  int i_n1 = 0;
  int i_n2 = 0;

  // Go from right to left in num1
  for (int i = len1 - 1; i >= 0; i--) {
    int carry = 0;
    int n1 = num1[i] - '0';

    // To shift position to left after every
    // multiplication of a digit in num2
    i_n2 = 0;

    // Go from right to left in num2
    for (int j = len2 - 1; j >= 0; j--) {
      // Take current digit of second number
      int n2 = num2[j] - '0';

      // Multiply with current digit of first number
      // and add result to previously stored result
      // at current position.
      int sum = n1 * n2 + result[i_n1 + i_n2] + carry;

      // Carry for next iteration
      carry = sum / 10;

      // Store result
      result[i_n1 + i_n2] = sum % 10;

      i_n2++;
    }

    // store carry in next cell
    if (carry > 0)
      result[i_n1 + i_n2] += carry;

    // To shift position to left after every
    // multiplication of a digit in num1.
    i_n1++;
  }

  // ignore '0's from the right
  int i = (sizeof(result) / sizeof(result[0])) - 1;
  while (i >= 0 && result[i] == 0)
    i--;

  // If all were '0's - means either both or
  // one of num1 or num2 were '0'
  if (i == -1)
    return "0";

  // generate the result string
  char *s = "";

  while (i >= 0)
    s += '0' + result[i--];

  return s;
}

// Driver code
int main() {
  char str1[100] = "1235421415454545";
  char str2[100] = "171444544545";

  if ((str1[0] == '-' || str2[0] == '-') && (str1[0] != '-' || str2[0] != '-'))
    printf("-");

  printf("ans = %s", multiply(str1, str2));
  return 0;
}
