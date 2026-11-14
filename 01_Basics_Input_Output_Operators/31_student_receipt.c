#include <stdio.h>
int main(){
    char section;
    int id;
    float fee;

    printf("Enter your section: ");
    scanf("%c", &section);
    printf("Enter your student ID: ");
    scanf("%d", &id);
    printf("Enter your semester fee: ");
    scanf("%f", &fee);

    printf("---------Student Registration Receipt--------\n");
    printf("Section: %c\n", section);
    printf("ASCII Value of section: %d\n", section);
    printf("Student ID: %d\n", id);
    printf("Semester Fee: %.2f\n", fee);

    return 0;
}