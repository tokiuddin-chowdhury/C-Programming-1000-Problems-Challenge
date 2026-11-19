#include <stdio.h>
int main() {
    char alpha;
    printf("Enter an alphabet: ");
    scanf(" %c", &alpha);

    if (alpha < 'a' || alpha > 'z') {
        printf("Invalid Character\n");
    }
    else {
        int pos = alpha - 'a' + 1;

        if (pos % 2 == 0) {
            printf("Even Position\n");
        }
        else {
            printf("Odd Position\n");
        }
    }
    return 0;
}