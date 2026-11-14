#include <stdio.h>
int main(){
    int age;
    float cgpa;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your cgpa: ");
    scanf("%f", &cgpa);

    if (21 <= age && 32 >= age && cgpa >= 3.00) {
        printf("Eligible for Govt. job!\n");
    }
    else {
        printf("Not Eligible!\n");
    }
    return 0;
}