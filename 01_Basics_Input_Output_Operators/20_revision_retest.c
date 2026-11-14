#include <stdio.h>
int main(){
    char coach;
    int tickets;
    float ticket_price, total_fare;

    printf("Enter coach type (A/N): ");
    scanf("%c", &coach);
    printf("Enter number of tickets: ");
    scanf("%d", &tickets);
    printf("Enter price of one ticket: ");
    scanf("%f", &ticket_price);

    total_fare = tickets * ticket_price;
    printf("--------TICKET RECEIPT--------\n");
    printf("Coach Type: %c\n", coach);
    printf("Total Tickets: %d\n", tickets);
    printf("Total Fare: %.2f\n", total_fare);

    return 0;


}