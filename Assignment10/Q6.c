#include <stdio.h>
int findMax(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    int max = findMax(arr, n - 1);
    if (arr[n - 1] > max)
        return arr[n - 1];
    else
        return max;
}
int countOccurrences(int arr[], int n, int max)
{
    if (n == 0)
        return 0;
    if (arr[n - 1] == max)
        return 1 + countOccurrences(arr, n - 1, max);
    else
        return countOccurrences(arr, n - 1, max);
}
int main()
{
    int arr[100], n, i, max, count;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    if (n <= 0 || n > 100)
    {
        printf("Invalid array size.\n");
        return 0;
    }
    max = findMax(arr, n);
    count = countOccurrences(arr, n, max);
    printf("Maximum element = %d\n", max);
    printf("Number of occurrences = %d\n", count);
    return 0;
}
