#include <stdio.h>
int main() 
{
    int n, i, j, upper = 1, lower = 1, diagonal = 1, mainSum = 0, secondarySum = 0;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter the matrix elements:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }}
    printf("The matrix is:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }    
    for (i = 0; i < n; i++) 
    {
        mainSum += a[i][i];
        secondarySum += a[i][n - 1 - i];
    }
    for (i = 0; i < n; i++)
     {
        for (j = 0; j < n; j++) 
        {
            if (i > j && a[i][j] != 0) {
                upper = 0;
            }
            if (i < j && a[i][j] != 0) {
                lower = 0;
            }
            if (i != j && a[i][j] != 0) {
                diagonal = 0;
            }}}
    printf("\nSum of main diagonal = %d", mainSum);
    printf("\nSum of secondary diagonal = %d\n", secondarySum);
    if (diagonal) {
        printf("The matrix is a diagonal matrix.\n");
    } 
    else if (upper) {
        printf("The matrix is an upper triangular matrix.\n");
    } 
    else if (lower) {
        printf("The matrix is a lower triangular matrix.\n");
    } 
    else {
        printf("The matrix is none of these.\n");
    }
    return 0;
}