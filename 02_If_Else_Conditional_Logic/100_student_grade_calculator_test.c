#include<stdio.h>
int main() {
    int m;
    printf("Enter your marks: ");
    scanf("%d", &m);

    if (m < 0 || m > 100) {
        printf("Invalid Marks\n");
    }
    else if (m >= 80) {
        printf("Grade: A+\n");
    }
    else if (m >= 70) {
        printf("Grade: A\n");
    }
    else if (m >= 60) {
        printf("Grade: A-\n");
    }
    else if (m >= 50) {
        printf("Grade: B\n");
    }
    else if (m >= 40) {
        printf("Grade: C\n");
    }
    else {
        printf("Grade: F\n");
    }
    return 0;
}