#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n % 5 == 0 && n % 11 == 0) {
        printf("Divisible by both 5 and 11\n");
    }
    else {
        printf("NOT Divisible by both 5 and 11\n");
    }
return 0;
}