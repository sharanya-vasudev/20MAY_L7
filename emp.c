#include <stdio.h>
#include <string.h>

// Define a structure to represent an employee
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[3];
    struct Employee highestSalaryEmployee;
    int i;

    // Input data for three employees
    printf("Enter details for 3 employees:\n");
    for (i = 0; i < 3; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &employees[i].id);
        printf("Enter Employee Name: ");
        scanf(" %s[^\n]", employees[i].name); // To read a string with spaces
        printf("Enter Employee Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Find the employee with the highest salary
    highestSalaryEmployee = employees[0];
    for (i = 1; i < 3; i++) {
        if (employees[i].salary > highestSalaryEmployee.salary) {
            highestSalaryEmployee = employees[i];
        }
    }

    // Display the information of the employee with the highest salary
    printf("\nEmployee with the highest salary:\n");
    printf("Employee ID: %d\n", highestSalaryEmployee.id);
    printf("Employee Name: %s\n", highestSalaryEmployee.name);
    printf("Employee Salary: %.2f\n", highestSalaryEmployee.salary);

    return 0;
}
