#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks >= 80){
        printf("Grade: Pass\n");
    }
    else if (marks >= 40){
        printf("Grade: Pass\n");
    }
    else {
        printf("Grade: Fail\n");
    }
    return 0;
}