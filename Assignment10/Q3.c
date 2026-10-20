#include <stdio.h>
int rev(int a[], int n, int l, int r)
{
  if(l>=r)
    return 0;
  else
  {
    int temp = a[l];
    a[l] = a[r];
    a[r] = temp;
    rev(a,n,l+1,r-1);
  }
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array: ");
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("The original array is: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    printf("Reversed array is: ");
    rev(arr, n, 0, n-1);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}