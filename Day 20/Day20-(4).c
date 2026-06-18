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

    printf("Column-wise sums are:\n");

    for(j = 0; j < cols; j++)
    {
        sum = 0;                                     // Initialize sum for each column

        for(i = 0; i < rows; i++)
        {
            sum += matrix[i][j];                     // Add elements of current column
        }

        printf("Sum of Column %d = %d\n", j + 1, sum); // Display column sum
    }

    return 0;                                        // End of program
}