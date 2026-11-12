#include <stdio.h>
void remove_duplicates(int *arr, int n, int *result, int *new_size)
{
    *new_size = 0;
    for (int i = 0; i < n; i++)
    {
        int found = 0;

        for (int j = 0; j < *new_size; j++)
        {
            if (*(arr + i) == *(result + j))
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            *(result + *new_size) = *(arr + i);
            (*new_size)++;
        }
    }
}
int main()
{
    int arr[100], result[100];
    int n, new_size; 
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
     scanf("%d", &arr[i]);
    remove_duplicates(arr, n, result, &new_size);
    printf("\nOriginal Array: ");
    for (int i = 0; i < n; i++)
      printf("%d ", *(arr + i));
    printf("\nArray after removing duplicates: ");
    for (int i = 0; i < new_size; i++)
      printf("%d ", *(result + i));
    printf("\nNumber of distinct elements: %d\n", new_size);
    return 0;
}