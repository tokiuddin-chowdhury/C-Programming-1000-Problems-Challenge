#include <stdio.h>

int main() {
    char character;

    printf("Enter your favorite character: ");
    scanf(" %c", &character);

    printf("Your Favorite Character Is: %c\n", character);
    printf("The ASCII Value Is: %d\n", character);

    return 0;
} 