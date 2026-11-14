#include <stdio.h>
int main() {
    float radius;
    int choice;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Enter choice (1 for Area, 2 for Circumference): ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Area: %.2f\n", 3.1416 * radius * radius);
    }
    else if (choice == 2) {
        printf ("Circumference: %.2f\n", 2* 3.1416 * radius);
    }
    else {
        printf("Invalid Choice!\n");
    }
    return 0;
}