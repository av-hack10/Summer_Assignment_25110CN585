#include <stdio.h>

int main() 
{
    int i, j, n = 5;

    for(i = 1; i <= n; i++)  // Outer loop for rows
    {
        for(j = 1; j <= n; j++)  // Inner loop for columns
        {
            if(i == 1 || i == n || j == 1 || j == n)  // Check if it's a border position
                printf("*");  // Print asterisk for the border positions
            else
                printf(" ");  // Print space for the inner positions
        }
        printf("\n");  // Move to the next line after each row is printed
    }

    return 0;
}