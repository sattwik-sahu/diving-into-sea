#include <stdio.h>
#include "myfuncs.c"

extern int var;
extern int foo;

int main() {
    int var = 10;
    int foo;
    printf("var = %d\n", var);
    printf("fact(var) = %ld\n", factorial(var));

    printf("\n\nEnter a number:\t");
    scanf("%d", &foo);
    printf("You entered %d\n", foo);
    printf("fact(%d) = %ld\n", foo, factorial(foo));

    return 0;
}
