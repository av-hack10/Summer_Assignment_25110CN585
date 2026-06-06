#include <stdio.h>

int main() 
{
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++)  // Outer loop for rows
    {
        for(j = 1; j <= i; j++)  // Inner loop for columns
        {
            printf("%c ", i + 'A' - 1);  // Print the current row's corresponding uppercase letter followed by a space
        }
        printf("\n");  // Move to the next line after each row is printed
    }
    return 0;
}