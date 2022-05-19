#include <stdio.h>

long int factorial(int n) {
    return (n == 1)? 1 : (long int) n * factorial(n - 1);
}
