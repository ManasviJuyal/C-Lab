#include <stdio.h>
int A[10][10], B[10][10], C[10][10];
int r1, c1, r2, c2;
void multiply(int i, int j, int k)
{
    if (i == r1)
        return;
    if (j == c2)
    {
        multiply(i + 1, 0, 0);
        return;
    }
    if (k == c1)
    {
        multiply(i, j + 1, 0);
        return;
    }
    C[i][j] += A[i][k] * B[k][j];
    multiply(i, j, k + 1);
}
int main()
{
    int i, j;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2 || r1 <= 0 || c1 <= 0 ||
        r2 <= 0 || c2 <= 0 ||
        r1 > 10 || c1 > 10 || r2 > 10 || c2 > 10)
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);
    multiply(0, 0, 0);
    printf("Product of the matrices:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}