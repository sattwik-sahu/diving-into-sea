#include <stdio.h>

/*
* Name: Sattwik Kumar Sahu
* Roll No.: 21241
* Date: 2022-04-27
* Project: Check functioning of unary increment operator
*/
int main() {
  int a = 12, b = 2, c = 1;
  c += (a > 0 && a <= 10)? ++a : a / b;
  printf("Value of c is %d\n", c);
  return 0;
}
