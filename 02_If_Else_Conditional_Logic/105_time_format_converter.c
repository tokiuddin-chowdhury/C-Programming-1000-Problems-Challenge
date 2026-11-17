#include <stdio.h>

int main() {
    int h, m;
    printf("Enter the time: ");
    scanf("%d %d", &h, &m);

    if (h < 0 || h > 23 || m < 0 || m > 59) {
        printf("Invalid Time\n");
    }
    else if (h == 0) {
        printf("12:%02d AM\n", m);
    }
    else if (h < 12) {
        printf("%d:%02d AM\n", h, m);
    }
    else if (h == 12) {
        printf("12:%02d PM\n", m);
    }
    else {
        printf("%d:%02d PM\n", h - 12, m);
    }

    return 0;
}