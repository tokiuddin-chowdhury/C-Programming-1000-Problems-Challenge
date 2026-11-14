#include <stdio.h>
    int main(){
        int year;
        float height;

        printf("Enter your birth year: ");
        scanf("%d", &year);
        printf("Enter your height in feet: ");
        scanf("%f", &height);

        printf("Your Birth Year Is: %d\n", year);
        printf("Your Height Is: %.2f feet\n", height);

    return 0;
    }