#include <stdio.h>
struct Student
{
    int m1, m2, m3;
};
void calculate(struct Student *ptr)
{
    int total;
    float average;
    total = ptr->m1 + ptr->m2 + ptr->m3;
    average = total / 3.0;
    printf("\nTotal Marks = %d", total);
    printf("\nAverage Marks = %.2f", average);
    if(average >= 90)
        printf("\nGrade = A");
    else if(average >= 75)
        printf("\nGrade = B");
    else if(average >= 50)
        printf("\nGrade = C");
    else
        printf("\nGrade = F");
}
int main()
{
    struct Student s;
    struct Student *ptr;
    ptr = &s;
    printf("Enter marks in three subjects: ");
    scanf("%d %d %d", &ptr->m1, &ptr->m2, &ptr->m3);
    calculate(ptr);
    return 0;
}