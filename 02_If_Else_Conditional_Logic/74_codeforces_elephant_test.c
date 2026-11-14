#include <stdio.h>

int main() {
    int x;

    printf("Enter distance: ");
    scanf("%d", &x);

    if (x % 5 == 0) {
        printf("Minimum steps: %d\n", x/ 5);
    }
    else {
        printf("Minimum step: %d\n", (x / 5) +1);
    }
    return 0;
}