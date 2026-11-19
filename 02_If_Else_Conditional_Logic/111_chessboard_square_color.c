#include <stdio.h>

int main() {
    char c;
    int r;
    printf("Enter column (a-h) and row (1-8): ");
    scanf(" %c %d", &c, &r);

    if (c < 'a' || c > 'h' || r < 1 || r > 8) {
        printf("Invalid Square\n");
    }
    else {
        int col = c - 'a' + 1;

        if ((col + r) % 2 == 0) {
            printf("Black\n");
        }
        else {
            printf("White\n");
        }
    }

    return 0;
}