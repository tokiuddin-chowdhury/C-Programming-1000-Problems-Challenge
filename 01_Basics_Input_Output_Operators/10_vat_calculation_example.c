#include <stdio.h>
    int main() {
        float price, total_price;
        
        printf("Enter product base price: ");
        scanf("%f", &price);

        total_price = price + (price * 0.10);

        printf("Base Price: %.2f BDT\n", price);
        printf("Total Price (with 10%% VAT): %.2f BDT\n", total_price);

        return 0;

    }