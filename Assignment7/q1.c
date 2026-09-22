#include <stdio.h>
int main()
{
    int n, sum=0;
    float avg;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elemnt of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    avg=sum/n;
    printf("The array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nThe sum of the elements of the array is: %d\n", sum);
    printf("Average: %.2f\n", avg);
    return 0;
}