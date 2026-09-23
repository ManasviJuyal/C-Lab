#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the size of the matrix: ");
    scanf("%d%d", &n1,&n2);
    int a[n1], b[n2], arr[n1+n2];
    printf("Enter the elements of first array:\n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d", &a[i]);
    }
     printf("Enter the elements of second array:\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d", &b[i]);
    }
    printf("The merged array is:\n");
    for(int i=0;i<n1;i++)
    { 
      arr[i]=a[i];
    }
     for(int i=0;i<n2;i++)
    { 
      arr[i+n1]=b[i];
    }
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}