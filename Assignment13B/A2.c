#include <stdio.h>
void rowSum(int *a[10][10], int r, int c)
{
    int i, j, sum;
    printf("Sum of each row:\n");
    for(i = 0; i < r; i++)
    {
        sum = 0;
        for(j = 0; j < c; j++)
        {
            sum = *(*(a+ i ) + j)+sum;
        }
        printf("Row %d sum = %d\n", i + 1, sum);
    }
}

void columnSum(int *a[10][10], int r, int c)
{
    int i, j, sum;
    printf("Sum of each column:\n");
    for(j = 0; j < c; j++)
    {
        sum = 0;
        for(i = 0; i < r; i++)
        {
            sum= *(*(a+i) + j)+sum;
        }
        printf("Column %d sum = %d\n", j + 1, sum);
    }
}

int main()
{
    int a[10][10], r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    rowSum(a, r, c);
    columnSum(a, r, c);
    return 0;
}
