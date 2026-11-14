#include <stdio.h>

int main() {
    int year; 

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Hurry! It's a Leap year.\n"); 
    }
    else {
        printf("Shit! It's NOT a Leap year.\n");
    }
    return 0;
}