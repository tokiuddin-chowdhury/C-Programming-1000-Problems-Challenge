#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter three coefficients: ");
    scanf("%d %d %d", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    if (a == 0) {
        printf("Not a Quadratic Equation\n");
    }
    else if (d > 0) {
        printf("Real and Distinct Roots\n");
    }
    else if (d == 0) {
        printf("Real and Equal Roots\n");
    }
    else {
        printf("Complex Roots\n");
    }

    return 0;
}