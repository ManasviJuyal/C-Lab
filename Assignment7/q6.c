#include <stdio.h>
int main()
{
    int n, temp;
    printf("Enter the size of element: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int j=0;j<n/2;j++)
    {
      temp=arr[j];
      arr[j]=arr[n-1-j];
      arr[n-1-j]=temp;
    }
    printf("Reverse of the array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
