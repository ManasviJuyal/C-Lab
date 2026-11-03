#include <stdio.h>
struct Student{
   int roll_no;
   char name [50];
   float marks[3];
};
float average (struct Student s){
   return (s.marks [0] + s.marks [1] + s.marks [2]) / 3.0;
}
int main()
{
   struct Student s[100];
   int n, i, j, pos;
   float best;
   printf("Enter number of Students: ");
   scanf("%d", &n);
for(i = 0; i < n; i++)
{      
    printf("Enter the Roll number: ");
    scanf("%d", &s[i].roll_no);
    printf("Enter the Name: ");
    scanf("%49s", s[i].name);
    printf("Enter marks of 3 subjects: ");
    for(j=0; j < 3; j++)
    {
        scanf("%f", &s[i].marks[j]);
    }
}
best = average (s[0]);
for(i=1; i < n; i++)
{
    if(average(s[i]) > best)
    {
        best = average(s[i]);
        pos=i;
    }
}
printf("\nStudent with Highest Average\nRoll Number: %d\nName: %s\nAverage Marks: %.2f\n",s [pos].roll_no,s[pos].name, best);
return 0;
}