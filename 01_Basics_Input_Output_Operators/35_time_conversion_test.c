#include <stdio.h>
int main(){
    int minute;
    int second;
    int division, modulus;

    printf("Enter total seconds: ");
    scanf("%d", &second);
 
    division = second / 60;
    modulus = second % 60;

    printf("Minutes: %d\n", division);
    printf("Remaining Seconds: %d\n", modulus);

    return 0;

}