#include <stdio.h>
int main()
{
    int m,n,r,c;
    printf("Enter the size of first matrix:\n");
    scanf("%d%d", &m, &n);
    printf("Enter the size of second matrix:\n");
    scanf("%d%d",&r, &c);
    if(n==r)
    {
        int a[m][n], b[r][c];
        printf("enter the 1st matrix:\n");
        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
           {   
            scanf("%d", &a[i][j]);
           }
        }
        printf("Enter the 2nd matrix: \n");
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
               scanf("%d", &b[i][j]);
            }
        }
        int arr[m][c];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<c;j++)
            {
                arr[i][j]=0;
                for(int k=0; k<n;k++)
                {
                   arr[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        printf("The Multiplication of matrix is:\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<c;j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Multiplication of matrix not possible");
    }
    return 0;
}