/*
 * Problem: 113 - Coordinate Quadrant Finder
 * Author: Omar Mohammad Toki Uddin Chowdhury
 * Date: 21 November 2026
 */

 #include <stdio.h>

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0) {
        printf("Origin\n");
    } else if (y == 0) {
        printf("X-axis\n");
    } else if (x == 0) {
        printf("Y-axis\n");
    } else if (x > 0 && y > 0) {
        printf("Quadrant 1\n");
    } else if (x < 0 && y > 0) {
        printf("Quadrant 2\n");
    } else if (x < 0 && y < 0) {
        printf("Quadrant 3\n");
    } else {
        printf("Quadrant 4\n");
    }

    return 0;
}