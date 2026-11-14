#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three sides of triangle number: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b) {
        printf("Valid Triangle!\n");
    }
    else {
        printf("Invalid Triangle!");
    }
    return 0;
}