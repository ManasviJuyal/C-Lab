#include <stdio.h>
struct Product
{
    int code;
    char name[50];
    int quantity;
    float price;
};
void display(struct Product *ptr[], int n)
{
    int i;
    printf("\nProduct Details:\n");
    for(i = 0; i < n; i++)
    {
        printf("\nProduct %d\n", i + 1);
        printf("Product Code = %d\n", ptr[i]->code);
        printf("Product Name = %s\n", ptr[i]->name);
        printf("Quantity = %d\n", ptr[i]->quantity);
        printf("Price = %.2f\n", ptr[i]->price);
    }
}
int main()
{
    struct Product p[100];
    struct Product *ptr[100];
    int n, i;
    printf("Enter number of products: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        ptr[i] = &p[i];
        printf("\nEnter details of product %d:\n", i + 1);
        printf("Enter product code: ");
        scanf("%d", &ptr[i]->code);
        printf("Enter product name: ");
        scanf("%49s", ptr[i]->name);
        printf("Enter quantity: ");
        scanf("%d", &ptr[i]->quantity);
       printf("Enter price: ");
        scanf("%f", &ptr[i]->price);
    }
    display(ptr, n);
    return 0;
}