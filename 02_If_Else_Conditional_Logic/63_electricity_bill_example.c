#include <stdio.h>

int main() {
    int units;
    float total_bill;

    printf("Enter consumed electricity units: ");
    scanf("%d", &units);

    if (units <= 100) {
        total_bill = units * 5.0;
    } 
    else {
        total_bill = (100 * 5.0) + ((units - 100) * 8.0);
    }

    printf("Total Electricity Bill: %.2f Taka\n", total_bill);

    return 0;
}