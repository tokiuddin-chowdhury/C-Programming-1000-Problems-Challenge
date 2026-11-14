#include <stdio.h>
int main(){
    int a, b, q, r;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    q = a / b;
    r = a % b;

    printf("Quotient (vagfol): %d\n", q);
    printf("Remainder (vagshesh): %d\n, r");

    return 0;
}