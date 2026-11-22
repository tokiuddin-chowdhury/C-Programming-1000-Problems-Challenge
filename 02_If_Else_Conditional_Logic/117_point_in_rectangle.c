/*
 * Problem: 117 - Point Position in a Rectangle
 * Author: Omar Mohammad Toki Uddin Chowdhury
 * Date: 22 November 2026
 */

#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    int x, y;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d %d", &x, &y);

    if (x > x1 && x < x2 && y > y1 && y < y2) {
        printf("Inside\n");
    } else if (x >= x1 && x <= x2 && y >= y1 && y <= y2) {
        printf("On Boundary\n");
    } else {
        printf("Outside\n");
    }

    return 0;
}