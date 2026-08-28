#include <stdio.h>
int main()
{
    int marks;
    float percentage;
    char grade;
    const int totalmarks=500;
    printf("Enter the marks obtained out of 500: \n");
    scanf("%d",&marks);
    percentage=(float)marks*100/totalmarks;
    if(percentage >=90)
    {
        grade='A';
        printf("Excellent\n");

    }
    else if(percentage >=75)
   {
    grade='B';
    printf("Very Good\n");
   }
    else if(percentage >=60)
   {
    grade='C';
    printf("Good\n");
   }
    else if(percentage >=40)
   {
    grade='D';
    printf("Pass\n");
   }
   else{
    grade='F';
    printf("Fail\n");
   }
   printf("Percentage= %.2f\n", percentage);
   printf("Grade= %c\n", grade);
   return 0;
}