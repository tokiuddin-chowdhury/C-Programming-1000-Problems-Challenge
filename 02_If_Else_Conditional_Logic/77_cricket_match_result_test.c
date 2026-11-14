#include <stdio.h>
int main() {
    int bd_runs;
    int aus_runs;

    printf("Enter Bangladesh runs: ");
    scanf("%d", &bd_runs);

    printf("Enter Australia runs: ");
    scanf("%d", &aus_runs);

    if (bd_runs < aus_runs) {
        printf("Australia Won!\n");
    }
    else if (bd_runs > aus_runs) {
        printf("Bangladesh Won!\n");
    }
    else {
        printf("Match Tied!\n");
    }
    return 0;
}