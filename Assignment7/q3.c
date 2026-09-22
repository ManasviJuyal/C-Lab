#include <stdio.h>
int main()
{
     int n, num, pos;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
       scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted and the position: ");
    scanf("%d%d", &num, &pos);
    if(pos>n)
    {
        printf("Invalid position");
    }
    else
    {
     for(int i=n;i>=pos;i--)
     {  
        arr[i]=arr[i-1];
    }  
     arr[pos-1]=num;
     printf("The array is:\n");
     for(int i=0;i<n+1;i++)
    {
       printf("%d ", arr[i]);
    }}
    return 0;
}