#include <stdio.h>
struct Student
{
   int rollNo;
   char name [50];
   int marks1, marks2, marks3;
   char grade;
};
void displayStudent(struct Student s)
{
    printf("Student Details\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Marks in Subject 1: %d\n", s.marks1);
    printf("Marks in Subject 2: %d\n", s.marks2);
    printf("Marks in Subject 3: %d\n", s.marks3);
    printf("Grade: %c\n", s.grade);
}
int totalMarks (struct Student s)
{
    return s.marks1 + s.marks2 + s.marks3;
}
void updateGrade (struct Student *s, char newGrade)
{
    s->grade = newGrade;
}
int main()
{
    struct Student s1;
    char newGrade;
    printf("Enter Roll Number: ");
    scanf("%d", &s1.rollNo);
    printf("Enter Name: ");
    scanf("%49s", s1.name);
    printf("Enter marks in Subject 1: ");
    scanf("%d", &s1.marks1);
    printf("Enter marks in Subject 2: ");
    scanf("%d", &s1.marks2);
    printf("Enter marks in Subject 3: ");
    scanf("%d", &s1.marks3);
    printf("Enter Grade: ");
    scanf("%c", &s1.grade);
    displayStudent (s1);
    printf("\nTotal Marks = %d\n", totalMarks (s1));
    printf("\nEnter New Grade: ");
    scanf("%c", &newGrade);
    updateGrade (&s1, newGrade);
    printf("\nAfter Updating Grade:");
    displayStudent (s1);
    return 0;
}