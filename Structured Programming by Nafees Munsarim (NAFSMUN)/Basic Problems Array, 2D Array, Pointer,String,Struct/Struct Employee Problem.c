#include <stdio.h>

// Define Struct
struct employee {
    int empid;
    char name[100];
    float salary;
};

int main() {
    // Declaration
    struct employee emp1, emp2, emp3;

    // input details for the first employee
    printf("Input details for employee 1:\n");
    printf("Employee ID : ");
    scanf("%d", &emp1.empid);
    printf("Name : ");
    scanf("%s", emp1.name);
    printf("Salary: ");
    scanf("%f", &emp1.salary);

    // input details for the second employee
    printf("\nInput details for employee 2:\n");
    printf("Employee ID : ");
    scanf("%d", &emp2.empid);
    printf("Name : ");
    scanf("%s", emp2.name);
    printf("Salary: ");
    scanf("%f", &emp2.salary);

    // input details for the third employee
    printf("\nInput details for employee 3:\n");
    printf("Employee ID : ");
    scanf("%d", &emp3.empid);
    printf("Name : ");
    scanf("%s", emp3.name);
    printf("Salary: ");
    scanf("%f", &emp3.salary);

    // find the employee with the highest salary
    struct employee highestsalaryemp;

    if (emp1.salary >= emp2.salary && emp1.salary >= emp3.salary) {
        highestsalaryemp = emp1;
    } else if (emp2.salary >= emp1.salary && emp2.salary >= emp3.salary) {
        highestsalaryemp = emp2;
    } else {
        highestsalaryemp = emp3;
    }

    printf("\nEmployee with the Highest Salary:\n");
    printf("Employee ID: %d\n", highestsalaryemp.empid);
    printf("Name: %s\n", highestsalaryemp.name);
    printf("Salary: %.2f\n", highestsalaryemp.salary);

    return 0;
}
