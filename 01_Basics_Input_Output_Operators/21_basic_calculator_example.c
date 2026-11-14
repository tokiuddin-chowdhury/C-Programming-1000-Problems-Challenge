#include <stdio.h>
int main(){
    int num1, num2, sum, sub;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    sub = num1 - num2;

    printf("Addition (sum): %d\n", sum);
    printf("subtarction (sub): %d\n", sub);

    return 0;
}