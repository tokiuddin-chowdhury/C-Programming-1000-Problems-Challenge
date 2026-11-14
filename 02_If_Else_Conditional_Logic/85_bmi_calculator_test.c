#include <stdio.h>
int main() {
    float weight;
    float height;
    float bmi;

    printf("Enter your Weight: ");
    scanf("%f", &weight);
    printf("Enter your Height: ");
    scanf("%f", &height);

    bmi = weight / (height * height);
    printf("Your BMI is : %.2f\n", bmi);

   if (bmi < 18.5) {
        printf("Status: Underweight\n");
    }
    else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("Status: Normal Weight\n");
    }
    else if (bmi >= 25.0 && bmi <= 29.9) {
        printf("Status: Overweight\n");
    }
    else {
        printf("Status: Obese\n");
    }
    return 0;
}