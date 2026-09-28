#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the size of the element: \n");
    scanf("%d%d", &m,&n);
    int a[m][n];
    printf("Enter the elements:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}