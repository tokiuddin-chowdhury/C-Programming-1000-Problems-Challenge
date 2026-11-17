#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the three side lengths: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (b + c > a) && (a + c > b)) {
        if (a == b && b == c) {
            printf("Equilateral Triangle\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle\n");
        }
        else {
            printf("Scalene Triangle\n");
        }
    }
    else {
        printf("Invalid Triangle\n");
    }

    return 0;
}