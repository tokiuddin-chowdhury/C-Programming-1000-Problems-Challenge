#include <stdio.h>
int main(){
    int cost_price, selling_price;
    
    printf("Enter the cost price: ");
    scanf("%d", &cost_price);
    printf("Enter the selling price: ");
    scanf("%d", &selling_price);

    if (selling_price > cost_price) {
        printf("Result: Profit!\n", cost_price);
    }
    else {
        printf("Result: Loss!\n", selling_price);
    }
    return 0;
}