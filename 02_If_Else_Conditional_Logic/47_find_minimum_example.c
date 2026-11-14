#include <stdio.h>
int main() {
    int number1, number2;

    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("enter second number: ");
    scanf("%d, &number2");
    
    if (number1 < number2) {
        printf("Minimum is: %d\n", number1);
    }
    else {
        printf("Minimum is: %d\n", number2);
    }
    return 0;
}