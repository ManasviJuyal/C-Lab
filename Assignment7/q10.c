#include <stdio.h>
int main()
{
    int m,n,r,c;
    printf("Enter the size of 1st matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the size of 2nd matrix: ");
    scanf("%d%d", &r,&c);
    if(r!=m || c!=n)
    {
        printf("Matrix addition not possible...");
    }
    else
    {
    int a[m][n], b[m][n], add[m][n];
    printf("Enter the elemnets of the first matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elemnets of the second matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &b[i][j]);
            add[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Enter Resulting matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}