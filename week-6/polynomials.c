#include <stdio.h>
#define MAXSIZE 1024

int main() {
  // Input two polynomials
  int deg1, deg2;
  int coeff1[MAXSIZE], coeff2[MAXSIZE], ansCoeff[MAXSIZE];

  /*
  * Polynomials are input by coeffs
  * Coeffs are input from x^0 to x^d
  * where d is the degree of the polynomial
  */

  printf("Polynomial #1:\n");
  printf("Degree?\n>>> ");
  scanf("%d", &deg1);
  printf("Enter coefficients of all powers of x\n");
  printf("from x^0 (const term) to x^%d\n>>> ", deg1);
  for (int i = 0; i < deg1 + 1; i++)
    scanf("%d", &coeff1[i]);

  printf("\n\nPolynomial #2:\n");
  printf("Degree?\n>>> ");
  scanf("%d", &deg2);
  printf("Enter coefficients of all powers of x\n");
  printf("from x^0 (const term) to x^%d\n>>> ", deg2);
  for (int i = 0; i < deg2 + 1; i++)
    scanf("%d", &coeff2[i]);

  // Compute coeffs of each power of x
  for (int i = 0; i < deg1 + deg2 + 2; i++)
    ansCoeff[i] = 0;
  for (int i = 0; i < deg1 + 1; i++) {
    for (int j = 0; j < deg2 + 1; j++) {
        ansCoeff[i + j] += coeff1[i] * coeff2[j];
    }
  }

  // Print out resulting polynomial
  printf("\n\nAnswer =\n");
  for (int i = deg1 + deg2 + 1; i > 0; i--) 
      if (ansCoeff[i] != 0) 
          printf("%6d x^%d +\n", ansCoeff[i], i);
  printf("%6d\n", ansCoeff[0]);
  printf("\n");

  return 0;
}
