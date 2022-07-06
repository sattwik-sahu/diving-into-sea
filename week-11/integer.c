#include <stdio.h>
#include <stdlib.h>

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

typedef struct {
  int sign;
  char *digits;
  int lastIndex;
} Integer;

Integer ONE = {1, "1", 0}, ZERO = {1, "0", 0}, _ONE = {-1, "1", 0};

void printInt(Integer x) {
  printf("%c%s", (x.sign == -1)? '-' : ' ', x.digits);
}

Integer negative(Integer x) {
  Integer ans = {-x.sign, x.digits, x.lastIndex};
  return ans;
}

Integer addInt(Integer x1, Integer x2) {
  Integer ans;
  ans.digits = (char *) calloc(max(x1.lastIndex + 1, x2.lastIndex + 1) + 1, sizeof(char));
  
  return ans;
}

Integer subtInt(Integer x1, Integer x2) {
  Integer ans;
  return ans;
}

Integer multInt(Integer x1, Integer x2) {
  Integer ans;
  return ans;
}

int main() {
  printInt(ONE);
  printf("\n");
  printInt(ZERO);
  printf("\n");
  printInt(_ONE);
  return 0;
}
