#include <stdio.h>
int main() {
    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    if ( day == 5 || day ==6) {
        printf("Status: It is a Weekend!");
    }
    else {
        printf("Status: It is a working Day.");
    }
    return 0;
}