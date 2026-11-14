#include <stdio.h>
    int main() {

        float hours;
        float rate_per_unit;
        float total_units, total_cost;

        printf("Enter charging hours: ");
        scanf("%f", &hours);
        printf("Enter electricity rate per unit(BDT): ");
        scanf("%f", &rate_per_unit);

        total_units = hours * 0.20;
        total_cost = total_units * rate_per_unit;

        printf("Total Electricity Used: %.2f Units\n", total_units);
        printf("Total Charging Cost: %.2f\n", total_cost);

        return 0;

    }