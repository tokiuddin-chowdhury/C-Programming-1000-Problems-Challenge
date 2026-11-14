#include <stdio.h>

int main() {
    char letter;

    printf("Enter a lowercase English letter: ");
    scanf(" %c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
        printf("Result: It is a Vowel!\n");
    } 
    else {
        printf("Result: It is a Consonant!\n");
    }
    return 0;
}