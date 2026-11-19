#include <stdio.h>
int main () {
    int i, s, l;
    printf("Enter Monthly Income ,Score, Loan: ");
    scanf("%d %d %d", &i, &s, &l);
    
    if (i >= 30000 && s > 700 && l < 10000) {
        printf("Full Loan Approved\n");
    }
    else if (i >= 30000 && s > 700) {
        printf("Partial Loan Approved\n");
    }
    else if (s > 700 && l < 10000) {
        printf("Conditional Loan Approved\n");
    }
    else if (i >= 30000 || s > 700 || l < 10000) {
        printf("Under Review\n");
    }
    else {
        printf("Loan Rejected\n");
    }
    return 0;
}