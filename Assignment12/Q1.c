#include <stdio.h>
struct Student
{
    int roll_no;
    char name[50];
    float marks[3];
};
int main()
{
    struct Student s;
    float total=0.0f, avg;
    char grade;
    printf("Enter roll number: ");
    scanf("%d",&s.roll_no);
    printf("Enter the name: ");
    scanf("%49s", &s.name);
    printf("Enter the marks of the 3 subjects: ");
    for(int i=0;i<3;i++)
    {
       scanf("%f", &s.marks[i]);
       total+=s.marks[i];
    }
    avg=total/3.0;
    if(avg>=90)
      grade='A';
    else if(avg>=75)
      grade='B';
    else if(avg>=60)
      grade='C';  
    else if(avg>=40)
      grade='D';
    else
      grade='F';
    printf("Student Record-\nRoll number: %d\nName: %s\nTotal Marks: %.2f\nAverage: %.2f\nGrade: %c\n", s.roll_no, s.name, total, avg, grade);
    return 0;  
}