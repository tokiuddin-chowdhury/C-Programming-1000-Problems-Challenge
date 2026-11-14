#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if ( num >= 0 && num <= 9) {
        printf("1 Digit Number.\n");
    }
    else if (num >= 10 && num <= 99) {
        printf("2 Digit Number.\n");
    }
    else if (num >= 100 && num <= 999) {
        printf("3 Digit Number.\n");
    }
    else {
        printf("More than 3 Digits or Negative!\n");
    }
    return 0;
}