#include <stdio.h>
int main() 
{
    int n, i, j, symmetric = 1, skewSymmetric = 1;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
    int a[n][n], transpose[n][n];
    printf("Enter the matrix elements:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }}
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++)
         {
            transpose[i][j] = a[j][i];
        }}
    printf("Transpose of the matrix:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++)
         {
            if (a[i][j] != transpose[i][j]) {
                symmetric = 0;
            }

            if (a[i][j] != -transpose[i][j]) {
                skewSymmetric = 0;
            }}}
    if (symmetric==1) {
        printf("The matrix is symmetric.\n");
    } 
    else if (skewSymmetric==1){
        printf("The matrix is skew-symmetric.\n");
    } 
    else {
        printf("The matrix is neither symmetric nor skew-symmetric.\n");
    }
    return 0;
}
