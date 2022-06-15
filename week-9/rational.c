#include <stdio.h>
#include <stdlib.h>

struct Q {
  int m;
  int n;
};

int hcf(int n1, int n2) {
  int min = n1 > n2 ? n2 : n1, max = n1 < n2 ? n2 : n1;
  int mult = 1, lcm;
  while ((lcm = mult++ * max) % min > 0)
    ;
  int hcf = min * max / lcm;

  return hcf;
}

void normalize(struct Q *q) {
  int div = hcf(q->m, q->n);
  q->m = (q->m) / div;
  q->n = (q->n) / div;
}

void printRational(struct Q q) { printf("%d / %d\n", q.m, q.n); }

struct Q add(struct Q n1, struct Q n2) {
  struct Q sum = {n2.n * n1.m + n2.m * n1.n, n1.n * n2.n};
  normalize(&sum);
  return sum;
}

struct Q subtract(struct Q n1, struct Q n2) {
  struct Q diff = {n2.n * n1.m - n2.m * n1.n, n1.n * n2.n};
  normalize(&diff);
  return diff;
}

struct Q multiply(struct Q n1, struct Q n2) {
  struct Q prod = {n1.m * n2.m, n1.n * n2.n};
  normalize(&prod);
  return prod;
}

struct Q divide(struct Q n1, struct Q n2) {
  struct Q quot = {n1.m * n2.n, n1.n * n2.m};
  normalize(&quot);
  return quot;
}

int main() {
  printf("Enter two rational numbers:\n");
  struct Q *rationals = (struct Q *)malloc(2 * sizeof(struct Q));
  for (int i = 0; i < 2; i++) {
    printf("NUMBER %d:\n", i + 1);
    printf("\tNumerator =\t");
    scanf(" %d", &rationals[i].m);
    printf("\tDenominator =\t");
    scanf(" %d", &rationals[i].n);
    printf("\n\n");
  }
  printf("You entered:\n");
  printRational(rationals[0]);
  printRational(rationals[1]);
  printf("\n\n");

  printf("Sum = ");
  printRational(add(rationals[0], rationals[1]));
  printf("Difference = ");
  printRational(subtract(rationals[0], rationals[1]));
  printf("Product = ");
  printRational(multiply(rationals[0], rationals[1]));
  printf("Quotient = ");
  printRational(divide(rationals[0], rationals[1]));

  free(rationals);

  return 0;
}
