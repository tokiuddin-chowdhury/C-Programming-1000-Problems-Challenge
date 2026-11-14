#include <stdio.h>
int main() {
    int length;
    int width;
    int area; 
    int perimeter;

    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the width: ");
    scanf("%d", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area of Rectangle: %d\n", area);
    printf("Perimeter of Rectangle: %d\n", perimeter);
    
    return 0;

}

