#include <stdio.h>
#define MAXLEN 10

/*
* Name: Sattwik Kumar Sahu
* Roll No.: 21241
* Description: Learn while loop
*/
int main() {
    int age;
    char name[MAXLEN];

    printf("Enter your name:\t");
    scanf("%s", name);
    printf("Enter your age:\t\t");
    scanf("%d", &age);

    int i = 0;
    printf("%s is...\n\n", name);
    while (i < age) {
        printf("%d years old,\n", ++i);
    }
    printf("\nYAY!!!");
}
