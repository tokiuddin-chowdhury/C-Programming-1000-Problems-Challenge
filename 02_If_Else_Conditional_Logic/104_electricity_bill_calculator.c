#include <stdio.h>

int main() {
    int unit;
    double total_bill;

    printf("Enter your unit: ");
    scanf("%d", &unit);

    if (unit <= 50) {
        total_bill = unit * 3.50;
    }
    else if (unit <= 150) {
        total_bill = (50 * 3.50) + ((unit - 50) * 4.00);
    }
    else if (unit <= 250) {
        total_bill = (50 * 3.50) + (100 * 4.00) + ((unit - 150) * 5.20);
    }
    else {
        total_bill = (50 * 3.50) + (100 * 4.00) + (100 * 5.20) + ((unit - 250) * 6.50);
    }

    total_bill = total_bill + 50.00;
    printf("Total Bill: %.2f\n", total_bill);

    return 0;
}