#include <stdio.h>
int main() {
    int w;
    printf("Enter Watermelon weight: ");
    scanf("%d", &w);

    if (w > 2 && w % 2 == 0) {
        printf("Result: Yes!\n");
    }
    else {
        printf("Result: No\n");
    }
    return 0;
}