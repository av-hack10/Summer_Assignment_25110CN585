#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    printf("Enter number of rows: ");                // Input rows
    scanf("%d", &rows);

    printf("Enter number of columns: ");             // Input columns
    scanf("%d", &cols);

    int matrix[rows][cols], transpose[cols][rows];

    printf("Enter elements of the matrix:\n");       // Input matrix elements

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find transpose of the matrix
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];          // Swap rows and columns
        }
    }

    printf("Transpose of the matrix:\n");            // Display transpose matrix

    for(i = 0; i < cols; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;                                        // End of program
}