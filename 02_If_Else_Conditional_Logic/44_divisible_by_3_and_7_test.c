#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 3 ==0 && number % 7 == 0) {
        printf("The number is divisible by both 3 and 7.\n");
    }
    else{
        printf("he number is NOT divisible by both 3 and 7.\n");
    }
    return 0;
}