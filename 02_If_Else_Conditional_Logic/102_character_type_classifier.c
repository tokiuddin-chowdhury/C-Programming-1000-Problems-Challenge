#include <stdio.h>
int main() {
    char c;
    printf("Enter a English Letter: ");
    scanf(" %c", &c);
    
    if (c >= 'A'&& c <= 'Z') {
        printf("Uppercase Alphabet\n");
    }
    else if (c >= 'a' && c <= 'z') {
        printf("Lowercase Alphabet\n");
    }
    else if (c >= '0' && c <= '9') {
        printf("Digit\n");
    }
    else {
        printf("Special Charecter\n");
    }
    return 0;
}