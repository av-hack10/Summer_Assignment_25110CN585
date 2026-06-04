#include <stdio.h>

int main() 
{
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("%d ", i);  // Print the value of i to create a pattern of consecutive numbers
        }
        printf("\n");
    }
    return 0;
}