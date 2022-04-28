#include <stdio.h>
#define PI 3.141592653589

/*
 * Name: Sattwik Kumar Sahu
 * Roll No.: 21241
 * Date: 2022-04-27
 * Project: Calculate area of circle
 */
int main() {
  float area, radius;
  printf("Enter radius of circle:\t");
  scanf("%f", &radius);
  // Calculate are of circle
  area = PI * radius * radius;

  // Print area of circle
  printf("Area of circle = %f\n", area);
  return 0;
}
