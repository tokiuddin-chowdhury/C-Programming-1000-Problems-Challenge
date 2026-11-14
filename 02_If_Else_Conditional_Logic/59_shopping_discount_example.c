#include <stdio.h>
int main() {
    int amount;

    printf("Enter total shopping amount: ");
    scanf("%d", &amount);

    if (amount >= 1000) {
        printf("Congratulations! You got 20%% discount!\n");
    }
    else {
        printf("No discount. Shop more to get a discount!\n");
    }
    return 0;
}