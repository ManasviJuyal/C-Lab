#include <stdio.h>
int main()
{
    int sumr, sumc,m,n;
    printf("enter the size of the array: ");
    scanf("%d%d", &m,&n);
    int arr[m][n];
    printf("Enter the elements: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        sumr=0;
        for(int j=0;j<n;j++)
        {
            sumr+=arr[i][j];
        }
        printf("The sum of %d row is: %d\n", (i+1), sumr);
    }
    for(int i=0;i<n;i++)
    {
        sumc=0;
        for(int j=0;j<m;j++)
        {
            sumc+=arr[j][i];
        }
        printf("The sum of %d column is: %d\n", (i+1), sumc);
    }
    return 0;
}