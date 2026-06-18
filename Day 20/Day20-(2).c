#include <stdio.h>

int main()
{
    int n, i, j;
    int isSymmetric = 1;                               // Assume matrix is symmetric

    printf("Enter the order of the square matrix: ");  // Input matrix size
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");     // Input matrix elements

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if matrix is symmetric
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(matrix[i][j] != matrix[j][i])          // Compare with transpose
            {
                isSymmetric = 0;
                break;
            }
        }

        if(isSymmetric == 0)
        {
            break;
        }
    }

    if(isSymmetric)
    {
        printf("The matrix is symmetric.\n");         // Symmetric matrix
    }
    else
    {
        printf("The matrix is not symmetric.\n");     // Not symmetric
    }

    return 0;                                         // End of program
}