#include <stdio.h>

int main() {
    int p, final_amount;
    printf("Enter the purchase amount: ");
    scanf("%d", &p);
    
    if (p >= 5000) {
        final_amount = p - (p * 20 / 100);
        printf("Payable Amount: %d\n", final_amount);
    }
    else if (p >= 2000) {
        final_amount = p - (p * 10 / 100);
        printf("Payable Amount: %d\n", final_amount);
    }
    else {
        printf("Payable Amount: %d\n", p);
    }

    return 0;
}