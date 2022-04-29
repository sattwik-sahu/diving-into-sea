#include <stdio.h>
#define MAXLEN 10

/*
 * Name: Sattwik Kumar Sahu
 * Roll No.: 21241
 * Description: Learn do-while loop
 */
void printMenu();

int main() {
  int age;
  char name[MAXLEN];

  printf("Enter your name:\t");
  scanf("%s", name);
  printf("Enter your age:\t\t");
  scanf("%d", &age);
  printf("\n");

  // Check out the switch statement here
  switch (age) {
  case 0:
    printf("Konspireci toheri");
    break;

  case 18:
    printf("Hey...hehe!!!");
    break;

  case 20:
    printf("Thirsty, %s? I know exactly where to get stuff...", name);
    break;

  default:
    printf("Don\'t know how to handle this situation.\n");
  }
}

void printMenu() {}
