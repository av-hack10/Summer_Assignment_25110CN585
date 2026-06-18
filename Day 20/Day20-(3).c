#include <stdio.h>

int main()
{
    int rows, cols, i, j, sum;

    printf("Enter number of rows: ");                // Input rows
    scanf("%d", &rows);

    printf("Enter number of columns: ");             // Input columns
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");   // Input matrix elements

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Row-wise sums are:\n");

    for(i = 0; i < rows; i++)
    {
        sum = 0;                                     // Initialize sum for each row

        for(j = 0; j < cols; j++)
        {
            sum += matrix[i][j];                     // Add elements of current row
        }

        printf("Sum of Row %d = %d\n", i + 1, sum);  // Display row sum
    }

    return 0;                                        // End of program
}