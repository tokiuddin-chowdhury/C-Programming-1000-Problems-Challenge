#include <stdio.h>

int main() {
    int x, y, z;

    printf("Enter your amount and balance: ");
    scanf("%d %d", &x, &y);

    if (x <= 0 || x % 500 != 0) {
        printf("Invalid Amount\n");
    }
    else if (x + 20 > y) {
        printf("Insufficient Balance\n");
    }
    else {
        z = y - x - 20;
        printf("Remaining Balance: %d\n", z);
    }

    return 0;
}