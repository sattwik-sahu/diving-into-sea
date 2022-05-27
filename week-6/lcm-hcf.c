#include <stdio.h>

int main() {
  int n1, n2;

  printf("n1 = ");
  scanf("%d", &n1);
  printf("n2 = ");
  scanf("%d", &n2);
  printf("\n");

  int min = n1 > n2 ? n2 : n1, max = n1 < n2 ? n2 : n1;
  int mult = 1, lcm;
  while ((lcm = mult++ * max) % min > 0)
    ;
  int hcf = min * max / lcm;
  printf("lcm = %d;\nhcf = %d;", lcm, hcf);
  return 0;
}
