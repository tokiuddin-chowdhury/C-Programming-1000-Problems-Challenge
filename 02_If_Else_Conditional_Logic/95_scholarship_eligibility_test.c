#include <stdio.h>
int main() {
    int score, attendance;
    printf("Enter the Exam score: ");
    scanf("%d", &score);
    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);

    if (score >= 85 && attendance >= 90) {
        printf("Eligible For Scholarship!\n");
    }
    else {
        printf("NOT Eligible.\n");
    }
    return 0;
}