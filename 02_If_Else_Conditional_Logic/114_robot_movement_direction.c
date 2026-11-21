/*
 * Problem: 114 - Robot Movement Direction
 * Author: Omar Mohammad Toki Uddin Chowdhury
 * Date: 21 November 2026
 */

#include <stdio.h>
int main () {
    int dx, dy;
    printf("Enter movement (dx dy): ");
    scanf("%d %d", &dx, &dy);

    if (dx == 0 && dy == 0) {
        printf("Stationary\n");
    }
    else if (dx > 0 && dy == 0) {
        printf("East\n");
    }
    else if (dx < 0 && dy == 0) {
        printf("West\n");
    }
    else if (dx == 0 && dy > 0) {
        printf("North\n");
    }
    else if (dx == 0 && dy < 0) {
        printf("South\n");
    }
    else if (dx > 0 && dy > 0) {
        printf("North-East\n");
    }
    else if (dx < 0 && dy > 0) {
        printf("North-West\n");
    }
    else if (dx < 0 && dy < 0) {
        printf("South-West\n");
    }
    else {
        printf("South-East\n");
    }
    return 0;
}