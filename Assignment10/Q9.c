#include <stdio.h>
int a[10][10], rows, cols;
int columnSum(int col, int row)
{
    if (row == rows)
        return 0;
    return a[row][col] + columnSum(col, row + 1);
}
int main()
{
    int i, j, sum, minSum, minCol;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    if (rows <= 0 || cols <= 0 || rows > 10 || cols > 10)
    {
        printf("Invalid matrix size.\n");
        return 0;
    }
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);
    minSum = columnSum(0, 0);
    minCol = 0;
    for (j = 1; j < cols; j++)
    {
        sum = columnSum(j, 0);
        if (sum < minSum)
        {
            minSum = sum;
            minCol = j;
        } }
    printf("Column with minimum sum: %d\n", minCol + 1);
    printf("Minimum sum: %d\n", minSum);
    return 0;
}