#include <stdio.h>

int main() {
    int bill;

    printf("Enter the bill amount: ");
    scanf("%d", &bill);

    if (bill >= 5000) {
        printf("Discount Applied: 15%% Off!\n");
    } 
    else if (bill >= 2000) {
        printf("Discount Applied: 5%% Off!\n");
    } 
    else {
        printf("No Discount for this bill amount.\n");
    }

    return 0;
}