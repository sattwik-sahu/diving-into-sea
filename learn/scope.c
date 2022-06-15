#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        printf("%d", i);
    }

    // Causes error since scipe of i only in for
    // printf("%d", i);

    return 0;
}
