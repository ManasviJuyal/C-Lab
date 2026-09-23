#include <stdio.h>
int main() 
{
    int arr[100], n, pos, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter position of element to delete: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > n) 
    {
        printf("Invalid position!\n");
    } 
    else 
    {
        for (i = pos - 1; i < n - 1; i++) 
        {
            arr[i] = arr[i + 1];
        }
        n--; 
        printf("Updated array:\n");
        for (i = 0; i < n; i++) 
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}