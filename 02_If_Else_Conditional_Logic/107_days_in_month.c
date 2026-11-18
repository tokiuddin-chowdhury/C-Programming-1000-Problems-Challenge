#include <stdio.h>
int main() {
    int m, y;
    printf("Enter Month and Year: ");
    scanf("%d %d", &m, &y);

    if (m < 1 || m > 12) {
        printf("Invalid Month\n");
    }
    else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        printf("31 Days\n");
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        printf("30 Days\n");
    }
    else {
        if((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
            printf("29 Days\n");
        }
        else {
        printf("28 Days\n");
        }
    }
    return 0;
}