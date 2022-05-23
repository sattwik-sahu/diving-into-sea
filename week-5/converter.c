/*
* Name: Sattwik Kumar Sahu
* Roll No.: 21241
* Date: 2022-05-12
* Description: Convert int to char and char to int
*/

#include <stdio.h>

int charToInt(char c) {
    return c - '0';
}

char intToChar(int i) {
    return (char)('0' + i);
}

int main() {
    printf("char \'5\' to int = %d\n", charToInt('5'));
    printf("int 5 to char = %c", intToChar(5));

    return 0;
}
