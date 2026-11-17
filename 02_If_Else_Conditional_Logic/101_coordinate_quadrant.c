#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two cartesian coordinates: ");
    scanf("%d %d", &x, &y);
    
    if (x == 0 && y == 0) {
        printf("Origin\n");
    }
    else if (x == 0 && y != 0) {
        printf("Y-Axis\n");
    }
    else if (y == 0 && x != 0) {
        printf("X-Axis\n");
    }
    else if (x > 0 && y > 0) {
        printf("Quadrant 1\n");
    }
    else if (x < 0 && y > 0) {
        printf("Quadrant 2\n");
    }
    else if (x < 0 && y < 0) {
        printf("Quadrant 3\n");
    }
    else {
        printf("Quadrant 4\n");
    }

    return 0;
}