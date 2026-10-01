#include <stdio.h>
void display(int arr[], int size)
{
    int i;
    printf("Array elements: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertElement(int arr[], int *size, int position, int value)
{
    int i;
    for (i = *size; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    (*size)++;
}
void deleteElement(int arr[], int *size, int position, int *deletedValue)
{
    int i;
    *deletedValue = arr[position];
    for (i = position; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
int main()
{
    int arr[100];
    int size, choice;
    int position, value, deletedValue;
    int i;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    do
    {
        MENU:
        printf("MENU:\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                display(arr, size);
                goto MENU;
            case 2:
                printf("Enter position (0 to %d): ", size);
                scanf("%d", &position);
                printf("Enter element to insert: ");
                scanf("%d", &value);
                if (position >= 0 && position <= size){
                    insertElement(arr, &size, position, value);
                    printf("Element inserted successfully.\n");
                }
                else
                    printf("Invalid position!\n");
                goto MENU;
            case 3:
                if (size == 0){
                    printf("Array is empty!\n");
                    goto MENU;
                }
                printf("Enter position (0 to %d): ", size - 1);
                scanf("%d", &position);
                if (position >= 0 && position < size){
                    deleteElement(arr, &size, position, &deletedValue);
                    printf("Deleted value: %d\n", deletedValue);
                }
                else
                    printf("Invalid position!\n");
                goto MENU;
            case 4:
                printf("Program terminated.\n");
                break;
            default:
                printf("Invalid choice!\n");
                goto MENU;
        }} while (choice != 4);
    return 0;
}