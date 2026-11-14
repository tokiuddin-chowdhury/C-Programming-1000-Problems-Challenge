#include <stdio.h>
int main() {
    int ticket;
    
    printf ("Enter Your Ticket Number: ");
    scanf("%d", &ticket);

    if (ticket % 10 == 7) {
        printf("Congertulation! You Won the Lottery!\n");
    }
    else {
        printf("better Luck Next Time!\n");
    }
    return 0;
}