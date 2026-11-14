#include <stdio.h>
int main() {
    int hours;
    float total_fee;

    printf("Enter Parking Hours: ");
    scanf("%d", &hours);

    if (hours <=2) {
        total_fee = hours * 30;
    }
    else {
        total_fee = (2 * 30) + ((hours - 2) * 50);
    }
    printf("Total Parking Fee : %.2f Taka\n", total_fee);

    return 0;
}