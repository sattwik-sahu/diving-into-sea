#include <stdio.h>
#define MAXLEN 10

/*
* Name: Sattwik Kumar Sahu
* Roll No.: 21241
* Description: Learn if-else statement
*/
int main() {
    int age;
    char name[MAXLEN];

    printf("Enter your name:\t");
    scanf("%s", name);
    printf("Enter your age:\t\t");
    scanf("%d", &age);

    if (age > 18) {
        printf("%s having fun?", name);
    } else {
        printf("%s needs to wait a while...", name);
    }
}
