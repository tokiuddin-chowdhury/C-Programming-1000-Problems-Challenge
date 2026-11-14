#include <stdio.h>
int main() {
    float amount, final_bill;
    
    printf("Enter shopping amount: ");
    scanf("%f", &amount);

    if (amount >= 1000) {
        final_bill = amount - (amount * 0.10);
        printf("10%% Discount applied! Final Bill: %.2f Taka\n", final_bill);
    }
    else {
        final_bill = amount;
        printf("No Discount. Final Bill: %.2f Taka\n", final_bill);
    }
    return 0;
}