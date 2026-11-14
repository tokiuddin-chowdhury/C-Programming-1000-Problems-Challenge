#include <stdio.h>
int main(){
    float cgpa;
    float ielts;

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);
    printf("Enter your IELTS Score: ");
    scanf("%f", &ielts);

    if (cgpa >= 3.50 && ielts >= 6.5) {
        printf("Congratulations! Welcome to Australia with full Scholarship!\n");
    }
    else {
        printf("Keep trying! Work harder!\n");
    }
    return 0;
}