#include <stdio.h>
void ascending(int *arr, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }}}}
void descending(int *arr, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(arr + j) < *(arr + j + 1))
            {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }}}}
void display(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int main()
{
    int arr[100];
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    ascending(arr, n);
    printf("\nArray in ascending order: ");
    display(arr, n);
    descending(arr, n);
    printf("Array in descending order: ");
    display(arr, n);
    return 0;
}