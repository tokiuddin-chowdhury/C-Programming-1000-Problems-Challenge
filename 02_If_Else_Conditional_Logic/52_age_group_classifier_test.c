#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 60) {
        printf("Category: Senior Citizen");
    }
    else if (age >= 18) {
        printf("Category: Adult");
    }
    else if (age >= 13) {
        printf("Category: Teenager");
    }
    else {
        printf("Category: Child");
    }
    return 0;
}