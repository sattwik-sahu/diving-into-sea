/*
 * Name: Anushri Arun Pawar
 * Roll No.: 21206
 * Date: 2022-05-05
 * Project: Create smple simple calculator in C
 */
#include <stdio.h>

int main() {
  float a, b, res;
  char op;
  int line = 1;

  printf("Welcome to C-CAL\nUsage: <number> <+,-,*,/> <number>\n!!! Mind the spaces.\nEnter `0 ! 0` "
         "to exit.\n\n");
  while (1) {
    printf("In  [%d]:\t", line);
    scanf(" %f %c %f", &a, &op, &b);

    if (a == 0 && b == 0 && op == '!')
      break;

    switch (op) {
    case '+':
      res = a + b;
      break;
    case '-':
      res = a - b;
      break;
    case '*':
      res = a * b;
      break;
    case '/':
      res = a / b;
      break;
    default:
      printf("Unknown operand %c", op);
    }
    printf("Out [%d]:\t%f\n\n", line++, res);
  }

  printf("\n\nThanks for using C-CAL!!!");
  return 0;
}
