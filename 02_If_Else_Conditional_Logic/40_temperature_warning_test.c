#include <stdio.h>
int main() {
    float temperature;

    printf("Enter today's temperature: ");
    scanf("%f", &temperature);

    if (temperature >= 30) {
        printf("It is hot day!");
    }
    else {
        printf("It is a normal day!");
    }
    return 0;
}