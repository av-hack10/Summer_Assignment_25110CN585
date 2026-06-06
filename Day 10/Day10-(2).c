#include <stdio.h>

int main() 
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)  // Loop for each row
    {
        for (j = 1; j <= n - i; j++)  // Loop for printing spaces
        {
            printf(" ");  // Print space for right alignment
        }
        for (j = 1; j <= i; j++)  // Loop for printing stars
        {
            printf("* ");  // Print star followed by a space for better visibility
        }
        printf("\n");  // Move to the next line after printing each row
    }
    return 0;
}