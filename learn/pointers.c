#include <stdio.h>

int main() {
    int a = 100, b = 10;
    int *p1 = &a;
    int *p2, *p3 = &b, c;
    printf("a = %d; b = %d; c = %d\np1 = %p; p2 = %p; p3 = %p\n\n", a, b, c, p1, p2, p3);

    *p1 = 99;
    printf("a = %d; b = %d; c = %d\np1 = %p; p2 = %p; p3 = %p\n\n", a, b, c, p1, p2, p3);

    p2 = p1;
    printf("a = %d; b = %d; c = %d\np1 = %p; p2 = %p; p3 = %p\n\n", a, b, c, p1, p2, p3);

    *p3 = *p1 + 10;
    printf("a = %d; b = %d; c = %d\np1 = %p; p2 = %p; p3 = %p\n", a, b, c, p1, p2, p3);


    return 0;
}
