#include <stdio.h>
int main() {
    int battery;
    
    printf("Enter your battery percentage: ");
    scanf("%d", &battery);

    if (battery >= 80) {
        printf("Battery Full: Ready for long ride!\n");
    }
    else if (battery >= 20) {
        printf("Battery Normal: Moerate range\n");
    }
    else{
        printf("Battery Low, Warning! Charge immediately!\n");
    }
    return 0;
}