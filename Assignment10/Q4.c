#include <stdio.h>
int SecondLargest(int arr[], int n, int largest, int secondLargest)
{
    if(n == 0)
    {
        return secondLargest;
    }
    if(arr[n-1] > largest)
    {
        secondLargest = largest;
        largest = arr[n-1];
    }
    else if(arr[n-1] > secondLargest && arr[n-1] != largest)
    {
        secondLargest = arr[n-1];
    }
    return SecondLargest(arr, n-1, largest, secondLargest);
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The second largest element in the array is: %d\n", SecondLargest(arr, n, arr[0], -1));
    return 0;
}