#include <stdio.h>

struct Employee {
    char name[50];
    float salary;
    char designation[50];
};

int main() {
    struct Employee e;
    printf("Enter name: ");
    scanf("%s", e.name);
    printf("Enter salary: ");
    scanf("%f", &e.salary);
    printf("Enter designation: ");
    scanf("%s", e.designation);

    printf("\nEmployee Details:\nName: %s\nSalary: %.2f\nDesignation: %s\n",
           e.name, e.salary, e.designation);
    return 0;
}