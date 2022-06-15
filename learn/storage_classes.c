#include <stdio.h>

/*
 * ====================== STORAGE CLASSES ============================
 * Each variable in C is one of four storage classes
 * auto, extern, static, register
 */

/*
 * ========================= AUTO ========================
 * Automatic varibales are local to a function.
 * Scope is only inside a funtion.
 * When control outside of function, value is lost.
 * Can declare many variables with same name in diff
 * functions keeping them automatic.
 * The scope can be reduced to a block by declaring it
 * inside the block {if, for, while, do..while}
 *
 * NOTE: Keyword auto not required as it is the default
 * for local variables in a function.
 * If not uninitialized, value of auto var is garbage.
 */
void testAuto() {
  // Scope in testAuto()
  auto int rickshaw = 69;

  for (int i = 0; i < rickshaw; i++) {
    // Scope of i inside this for loop
    printf("i = %d", i);
  }

  // Error since scope of i does not extend till here
  // printf("%d", i);
}

/*
 * ========================= EXTERN ========================
 * Extern vars are global and can be used in different functions,
 * in the whole program file or even ourside the file itself.
 */
extern int outvar;
void testExtern() {

  int outvar = 9;

  //   extern int invar;
  //   invar = 9;
  // Scope in testAuto()
  int rickshaw;

  for (int i = 0; i < rickshaw; i++) {
    // Scope of i inside this for loop
    printf("i = %d", i);
  }

  // Error since scope of i does not extend till here
  //  printf("%d", i);
}

/*
 * ========================= STATIC ========================
 * Static vars declared inside the function.
 * Local to the finction in which they are defined.
 * But they retain their values throughout the lifetime of the program.
 */
long int fibonacci(int reset) {
  static long int f1, f2, f = 0;
  static int count = 0;
  if (reset || count == 0) {
    f1 = f2 = 1;
    count = 0;
    if (reset)
      return 0;
  }

  f = (count++ < 2) ? 1 : f1 + f2;
  f1 = f2;
  f2 = f;

  return f;
}

int main() {
  for (int i = 0; i < 10; i++) {
    printf("%ld ", fibonacci(0));
  }
  fibonacci(1);
  printf("\n");

  for (int i = 0; i < 15; i++) {
    printf("%ld ", fibonacci(0));
  }
  return 0;
}

/*
 * In multifile programs functions need to be given
 * one of static or extern.
 * In multifile prog, default storage class for function
 * is extern by default. Good prog prac to write extern.

 * In multifile programs, an extern function can be defined
 * only once.
 */
