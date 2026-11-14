#include <stdio.h>
int main(){
    int sec, min, rem_sec;

    printf("Enter total seconds: ");
    scanf("%d", &sec);

    min = sec / 60;
    rem_sec = sec % 60;

    printf("Minutes: %d\n", min);
    printf("Remaining Seconds: %d\n", rem_sec);

    return 0;
}