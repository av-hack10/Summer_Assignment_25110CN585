#include <stdio.h>

int main()
{
    int n, i, j;
    int primarySum = 0, secondarySum = 0;

    printf("Enter the order of the square matrix: ");     // Input matrix size
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");        // Input matrix elements

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate diagonal sums
    for(i = 0; i < n; i++)
    {
        primarySum += matrix[i][i];                       // Primary diagonal

        secondarySum += matrix[i][n - 1 - i];            // Secondary diagonal
    }

    printf("Primary Diagonal Sum = %d\n", primarySum);   // Display primary sum
    printf("Secondary Diagonal Sum = %d\n", secondarySum); // Display secondary sum

    return 0;                                            // End of program
}