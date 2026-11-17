#include <stdio.h>

int main() {
    int m1, m2;

    printf("Enter first and second subject number: ");
    scanf("%d %d", &m1, &m2);

    if (m1 >= 33 && m2 >= 33 && (m1 + m2 >= 80)) {
        printf("Passed\n");
    }
    else {
        printf("Failed\n");
    }

    return 0;
}