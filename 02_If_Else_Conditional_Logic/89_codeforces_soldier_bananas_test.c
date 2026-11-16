#include <stdio.h>

int main() {
    int k, n, w, total_cost, borrow;
    printf("Enter k, n, w: ");
    scanf("%d %d %d", &k, &n, &w);

    total_cost = k * (w * (w + 1) / 2);

    if (total_cost > n) {
        borrow = total_cost - n;
        printf("%d\n", borrow);
    }
    else {
        printf("0\n");
    }

    return 0;
}