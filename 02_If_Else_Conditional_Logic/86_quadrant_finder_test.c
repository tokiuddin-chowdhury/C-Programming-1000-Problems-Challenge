#include <stdio.h>

int main() {
    int x, y;
    printf("Enter x and y coordinates: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) {
        printf("First Quadrant (+, +)\n");
    }
    else if (x < 0 && y > 0) {
        printf("Second Quadrant (-, +)\n");
    }
    else if (x < 0 && y < 0) {
        printf("Third Quadrant (-, -)\n");
    }
    else if (x > 0 && y < 0) {
        printf("Fourth Quadrant (+, -)\n");
    }
    else {
        printf("On the Axis or Origin\n");
    }

    return 0;
}