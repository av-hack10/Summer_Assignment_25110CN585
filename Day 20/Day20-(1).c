#include <stdio.h>

int main()
{
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of first matrix: ");      // Input size of first matrix
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");     // Input size of second matrix
    scanf("%d %d", &r2, &c2);

    if(c1 != r2)
    {
        printf("Matrix multiplication is not possible.");    // Check compatibility
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    printf("Enter elements of first matrix:\n");             // Input first matrix

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");            // Input second matrix

    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix with 0
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            for(k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];               // Multiply and add
            }
        }
    }

    printf("Product of the matrices:\n");                   // Display result matrix

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;                                               // End of program
}