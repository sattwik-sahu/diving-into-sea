#include <stdio.h>
#include <stdlib.h>
#include "array.h"

int main() {
    // int **board = getSquareMatrix(3);
    int **callocBoard = (int **) calloc(3, sizeof(int *));
    for (int i = 0; i < 3; i++) {
        callocBoard[i] = (int *) calloc(3, sizeof(int));
    }

    printMatrix(3, callocBoard);

    // Free memory from calloc
    for (int i = 0; i < 3; i++) free(callocBoard[i]);
    free(callocBoard);
}
