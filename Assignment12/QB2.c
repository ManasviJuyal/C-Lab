#include <stdio.h>
typedef struct
{
   int day;
   int month;
   int year;
} Date;
typedef struct
{
   int rollNo;
   char name [50];
   float cgpa;
   Date dob;
} Student;
void displayStudent (Student *s)
{
   printf("\nRoll Number: %d", s->rollNo);
   printf("\nName: %s", s->name);
   printf("\nCGPA: %.2f", s->cgpa);
   printf("\nDate of Birth: %02d/%02d/%d", s->dob.day, s->dob.month, s->dob.year);
}
void checkScholarship (Student *s)
{
   if(s->cgpa >= 8.5)
   {
      printf("\nScholarship Status: Eligible");
   }
   else
   {
      printf("\nScholarship Status: Not Eligible");
 }
}
int main()
{
Student s[100];
int n, i;
printf("Enter number of students: ");
scanf("%d", &n);
if(n < 1 || n > 100) 
{
   printf("Invalid number of students!");
   return 0;
}
for(i=0; i < n; i++)
{
printf("\nEnter details of Student %d\n", i + 1);
printf("Enter Roll Number: ");
scanf("%d", &s[i].rollNo);
printf("Enter Name: ");
scanf("%49[^\n]", s[i].name);
printf("Enter CGPA: ");
scanf("%f", &s[i].cgpa);
printf("Enter Date of Birth (DD MM YYYY): ");
scanf("%d %d %d", &s[i].dob.day,&s[i].dob.month, &s[i].dob.year);
}
printf("STUDENT DETAILS \n");
for(i=0; i < n; i++)
{
   printf("Student %d", i + 1);
   displayStudent(&s[i]);
   checkScholarship(&s[i]);
}
return 0;
}