#include <stdio.h>
int main() {
    int p, v, t;

    printf("Enter status of 3 friend (1 or 0): ");
    scanf("%d %d %d", &p, &v, &t);

   if (p + v + t >= 2) {
        printf("Team will solve the problem!\n");
    }
    else {
        printf("Team will NOT solve the problem!\n");
    }
    return 0;
}