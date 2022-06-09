#include <stdio.h>

/*
* Name: Anushri Arun Pawar
* Roll No.: 21206
* Description: Swap two variables using pointers
*/

void swap(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int i = 30, j = 50;
    printf("i = %d; j = %d\n", i, j);
    swap(&i, &j);
    printf("i=%d; j=%d", i, j);

    return 0;
}
