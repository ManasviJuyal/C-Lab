#include <stdio.h>
int main()
{
    int n, num, c=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
       scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &num);
    printf("Number found at index:\n");
    for(int i=0;i<n;i++)
    {
        if(num==arr[i])
        {
            printf("%d ", i+1);
            c++;
        }
    }
    if(c==0)
    {
        printf("Number not found");
    }
    else 
    printf("\nTotal numbe of occurences: %d\n", c);
    return 0;
}