#include <stdio.h>

int main() {
    char category;
    int quantity;
    float unit_price, total_bill;

    printf("Enter membership category (G/S): ");
    scanf(" %c", &category);
    printf("Enter quantity of pens: ");
    scanf("%d", &quantity);
    printf("Enter price of one pen: ");
    scanf("%f", &unit_price);

    total_bill = quantity * unit_price;

    printf("--------FINAL RECEIPT--------\n");
    printf("Category: %c\n", category);
    printf("Total Quantity: %d\n", quantity);
    printf("Total Bill: %.2f BDT\n", total_bill);
    return 0;
}