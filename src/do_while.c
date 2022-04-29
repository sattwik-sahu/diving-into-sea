#include <stdio.h>
#define MAXLEN 10

/*
 * Name: Sattwik Kumar Sahu
 * Roll No.: 21241
 * Description: Learn do-while loop
 */
int main() {
  int age;
  char name[MAXLEN];

  printf("Enter your name:\t");
  scanf("%s", name);
  printf("Enter your age:\t\t");
  scanf("%d", &age);
  printf("\n");

  int happiness;
  do {
    printf("How happy are you, %s? (0 - 100) >> ", name);
    scanf("%d", &happiness);
    if (happiness > 100) {
      printf("You on something, bruh?\n");
      break;
    } else {
        printf("Keeping urself alive then, huh?\n");
    }
  } while (happiness > 0);
  printf("Bye bye Depressed %s, your\'e just %d... KYS", name, age);
}
