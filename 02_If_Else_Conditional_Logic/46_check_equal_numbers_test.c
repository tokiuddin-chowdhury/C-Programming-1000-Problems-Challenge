#include <stdio.h>
int main() {
    int number1, number2;
    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
    if (number1 == number2) {
        printf("Both number are equal.\n");
    }
    else {
        printf("Both number are NOT equal.\n");
    }
    return 0;
}