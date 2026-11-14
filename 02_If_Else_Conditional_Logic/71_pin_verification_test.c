#include <stdio.h>
int main() {
    int pin;
    printf("Enter pin number: ");
    scanf("%d", &pin);

    if (pin == 1234) {
        printf("Access Granted! Welcome.\n");
    }
    else {
        printf("Access Denied! Wrong PIN.\n");
    }
    return 0;
}