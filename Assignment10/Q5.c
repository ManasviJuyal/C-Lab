#include <stdio.h>
int find(int arr[], int a, int s, int l)
{
    if(s>l)
    {
        return -1;
    }
    int m = (s + l) / 2;
    if(arr[m]>a)
    {
        return find(arr, a, s, m-1);
    }
    else if(arr[m]<a)
    {
        return find(arr, a, m+1, l);
    }
    else
        return m;
    return find(arr, a, s, l);
}
int main()
{
    int n, num;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the number to search: ");
    scanf("%d", &num);
    printf(find(arr, num, 0, n-1) == -1 ? "Element not found in the array.\n" : "Element found at index %d.\n", find(arr, num, 0, n-1));
    return 0;
}