#include <stdio.h>
int main() {
    int marks;
    printf("Enter your exam marks: ");
    scanf("%d", &marks);

    if (marks >= 40) {
        printf("You Passed!\n");
    }
    else {
        printf("You Failed!\n");
    }
    return 0;
}