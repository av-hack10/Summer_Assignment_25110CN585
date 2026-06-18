#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    printf("Enter number of rows: ");                 // Input rows
    scanf("%d", &rows);

    printf("Enter number of columns: ");              // Input columns
    scanf("%d", &cols);

    int A[rows][cols], B[rows][cols], Sum[rows][cols];

    printf("Enter elements of First Matrix:\n");      // Input first matrix

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Second Matrix:\n");     // Input second matrix

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Add corresponding elements of matrices
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum of the matrices:\n");                 // Display result matrix

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;                                         // End of program
}