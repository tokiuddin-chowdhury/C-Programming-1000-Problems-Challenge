#include <stdio.h>

int main() {
    int tickets;
    
    printf("Enter number of tickets: ");
    scanf("%d", &tickets);

    if (tickets >= 5) {
        printf("Total Bill: %d\n", 180 * tickets);
    }
    else {
        printf("Total Bill: %d\n", 200 * tickets);
    }
    return 0;
}
