#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};
void modifySalary(struct Employee *ptr)
{
    float newSalary;
    printf("Enter new salary: ");
    scanf("%f", &newSalary);
    ptr->salary = newSalary;
}
void display(struct Employee *ptr)
{
    printf("\nEmployee Details:\n");
    printf("Employee ID = %d\n", ptr->id);
    printf("Employee Name = %s\n", ptr->name);
    printf("Employee Salary = %.2f\n", ptr->salary);
}
int main()
{
    struct Employee e;
    struct Employee *ptr;
    ptr = &e;
    printf("Enter employee ID: ");
    scanf("%d", &ptr->id);
    printf("Enter employee name: ");
    scanf("%49s", ptr->name);
    printf("Enter employee salary: ");
    scanf("%f", &ptr->salary);
    printf("\nBefore Modification:");
    display(ptr);
    modifySalary(ptr);
    printf("\nAfter Modification:");
    display(ptr);
    return 0;
}
