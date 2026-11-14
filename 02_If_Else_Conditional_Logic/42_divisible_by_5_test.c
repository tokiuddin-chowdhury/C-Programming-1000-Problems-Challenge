#include <stdio.h>
int main() {
    int number;
    printf("Enter a number here: ");
    scanf("%d", &number);
    if (number % 5 == 0) {
        printf("The number is divisible by 5\n");
    }
    else {
        printf("The number is NOT divisible by 5\n");
    }
    return 0;
}