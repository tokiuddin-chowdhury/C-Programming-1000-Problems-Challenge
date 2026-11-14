#include <stdio.h>
    int main() {

        float price, discounted_price;

        printf("Enter product base rate: ");
        scanf("%f", &price);

        discounted_price = price - (price * 0.15);
        
        printf("Base Price: %.2fBDT\n", price);
        printf("After Discount Price: %.2fBDT", discounted_price);

        return 0;

    }