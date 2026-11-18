#include <stdio.h>
void findLargestSmallest(int a[], int n)
{
    int i, largest, smallest;
    int *ptr = a;
    largest = smallest = *ptr;
    for(i = 1; i < n; i++)
    {
        if(*(ptr + i) > largest)
            largest = *(ptr + i);

        if(*(ptr + i) < smallest)
            smallest = *(ptr + i);
    }
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);
}
int main()
{
    int a[100], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    findLargestSmallest(a, n);
    return 0;
}