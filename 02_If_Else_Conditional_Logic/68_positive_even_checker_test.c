#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0 && num % 2 ==0) {
        printf("It is a positive Even number!\n");
    }
    else {
        printf("Condition did not match.\n");
    }
    return 0;
}