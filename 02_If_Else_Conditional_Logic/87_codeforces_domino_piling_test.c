#include <stdio.h>

int main() {
    int m, n, max_dominoes;
    printf("Enter board size (M N): ");
    scanf("%d %d", &m, &n);

    max_dominoes = (m * n) / 2;
    printf("%d\n", max_dominoes);

    return 0;
}