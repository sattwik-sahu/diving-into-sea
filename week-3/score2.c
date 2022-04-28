#include <ctype.h>
#include <stdio.h>
#define MAX_LEN 100

/*
* Name: Sattwik Kumar Sahu
* Roll No.: 21241
* Date: 2022-04-27
* Project: Calculate average of 3 scores
*/
int main() {
    int len, j;
    char name[MAX_LEN];
    float score1, score2, score3, avg;
    printf("Enter your name:\t");
    scanf("%[^*\n]", name);
    printf("Enter score1:\t");
    scanf("%f", &score1);
    printf("Enter score2:\t");
    scanf("%f", &score2);
    printf("Enter score3:\t");
    scanf("%f", &score3);

    // Calculate average of score1, score2, score3
    avg = (score1 + score2 + score3) / 3;

    for(len = 0; len < MAX_LEN; len++) {
        if (name[len] == '\0') {
            break;
        }
    }
    for(j = 0; j < len; j++) {
        name[j] = toupper(name[j]);
    }

    printf("\n\nName:\t%-s\n\n", name);
    printf("Score 1 = %-5.1f\nScore 2 = %-5.1f\nScore 3 = %-5.1f\n\n", score1, score2, score3);
    printf("Average:\t%-5.1f\n", avg);
    return 0;
}
