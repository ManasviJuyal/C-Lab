#include <stdio.h>
void findElements(int arr[], int n, int *smallest, int *secondSmallest,
                  int *greatest, int *secondGreatest, int *count)
{
    int i;
    *count = 0;
    for (i = 0; i < n; i++)
    {
        int j, duplicate = 0;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }}
        if (duplicate)
            continue;
        (*count)++;
        if (*count == 1)
        {
            *smallest = arr[i];
            *greatest = arr[i];
        }
        else
        {
            if (arr[i] < *smallest)
            {
                *secondSmallest = *smallest;
                *smallest = arr[i];
            }
            else if (arr[i] != *smallest && (*count == 2 || arr[i] < *secondSmallest))
                *secondSmallest = arr[i];
            if (arr[i] > *greatest)
            {
                *secondGreatest = *greatest;
                *greatest = arr[i];
            }
            else if (arr[i] != *greatest && (*count == 2 || arr[i] > *secondGreatest))
            {
                *secondGreatest = arr[i];
            }}}
}
int main()
{
    int arr[100], n, i,count;
    int smallest, secondSmallest,greatest, secondGreatest;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    findElements(arr, n,&smallest, &secondSmallest,&greatest, &secondGreatest,&count);
    if (count < 2)
       printf("Fewer than two distinct values exist.\n");
    else
    {
        printf("Smallest = %d\n", smallest);
        printf("Second Smallest = %d\n", secondSmallest);
        printf("Greatest = %d\n", greatest);
        printf("Second Greatest = %d\n", secondGreatest);
    }
    return 0;
}