#include <stdio.h>
int main(){
    int chocolate, friend, total_1, total_2;
    printf("Enter total chocolates: ");
    scanf("%d", &chocolate);
    printf("Enter total friend: ");
    scanf("%d", &friend);

    total_1 = chocolate / friend;
    total_2 = chocolate % friend;

    printf("Chocolate Quotient: %d\n", total_1);
    printf("Chocolate Remainder: %d\n", total_2);

    return 0;    

}