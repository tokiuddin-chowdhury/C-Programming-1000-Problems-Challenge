#include <stdio.h>

int main(){
    int day, month, rem_day;

    printf("Enter total days: ");
    scanf("%d", &day);

    month = day / 30;   
    rem_day = day % 30;

    printf("Months: %d\n", month);
    printf("Remaining Days: %d\n", rem_day);

    return 0;
}