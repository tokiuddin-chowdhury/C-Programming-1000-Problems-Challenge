#include <stdio.h>
int main() {
    char ch;

    printf("Enter Uper/Lowercase Letter: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("It's an Upercase Letter!\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("It's a Lowercase Letter!\n");
    }
    else {
        printf("Not an English Alphabet!\n");
    }
    return 0;
}