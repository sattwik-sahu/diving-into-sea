/*
* Name: Sattwik Kumar Sahu
* Roll No.: 21241
* Description: Swap two variables using pointers
*/

void swapInt(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void swapChar(char *p1, char *p2) {
    char temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
