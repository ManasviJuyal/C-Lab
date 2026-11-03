#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    char name [50];
    int id;
    float salary;
    struct Date doj;
};
int main() {
    struct Employee e[3];
    int i;
    for (i = 0; i < 3; i++)
    {
       printf("\nEnter details of Employee %d:\n", i + 1);
       printf("Enter Name: ");
       scanf("%49s", e[i].name);
       printf("Enter Employee ID: ");
       scanf("%d", &e[i].id);
       printf("Enter Salary: ");
       scanf("%f", &e[i].salary);
       printf("Enter Date of Joining (dd mm yyyy): ");
       scanf("%d %d %d", &e[i].doj.day, &e[i].doj.month, &e[i].doj.year);
     }
    printf("\nEmployee Details \n");
    for (i = 0; i < 3; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: %s\n", e[i].name);
        printf("Employee ID: %d\n", e[i].id);
        printf("Salary: %.2f\n", e[i].salary);
        printf("Date of Joining: %02d-%02d-%04d\n", e[i].doj.day, e[i].doj.month, e[i].doj.year);
     } 
    return 0;
}