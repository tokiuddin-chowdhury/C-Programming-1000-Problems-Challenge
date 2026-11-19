#include <stdio.h>

int main() {
    float g, e;
    int p;
    printf("Enter your CGPA, IELTS Score & Publications: ");
    scanf("%f %f %d", &g, &e, &p);

    if (g >= 3.5 && e >= 6.5 && p > 0) {
        printf("Full Scholarship\n");
    }
    else if (g >= 3.5 && e >= 6.5) {
        printf("Partial Scholarship\n");
    }
    else if (g >= 3.5 && p > 0) {
        printf("Conditional Scholarship\n");
    }
    else if (g >= 3.5 || e >= 6.5 || p > 0) {
        printf("Under Review\n");
    }
    else {
        printf("Application Rejected\n");
    }

    return 0;
}