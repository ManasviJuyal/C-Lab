#include <stdio.h>
int calculateTotal(int m1, int m2, int m3, int m4, int m5) 
{
    return m1 + m2 + m3 + m4 + m5;
}

float calculatePercentage(int total)
{
    return total / 5.0;
}
char calculateGrade(float percentage)
{
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else if (percentage >= 50)
        return 'E';
    else
        return 'F';
}
int checkPass(int m1, int m2, int m3, int m4, int m5) 
{
    if (m1 >= 40 && m2 >= 40 && m3 >= 40 && m4 >= 40 && m5 >= 40)
        return 1;
    else
        return 0;
}
int main() 
{
    int m1, m2, m3, m4, m5, total;
    float percentage;
    char grade;
    printf("Enter marks in five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    total = calculateTotal(m1, m2, m3, m4, m5);
    percentage = calculatePercentage(total);
    grade = calculateGrade(percentage);
    printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f%%", percentage);
    printf("\nGrade = %c", grade);
    if (checkPass(m1, m2, m3, m4, m5))
        printf("\nResult = PASS\n");
    else
        printf("\nResult = FAIL\n");
    return 0;
}