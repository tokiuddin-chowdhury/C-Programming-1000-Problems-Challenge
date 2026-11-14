#include <stdio.h>
    int main(){
        float total_salary, salary;
        printf("Enter Your Salary: ");
        scanf("%f", &salary);
        printf("Basic Salary: %.2fBDT\n", salary);
        
        total_salary = salary + (salary * 0.20);
        printf("Total Salary(With 20%% bonus): %.2f\n", total_salary);

    return 0;
}