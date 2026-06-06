#include <stdio.h>

int main() 
{
    int n, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= n - i; j++) 
        {
            printf(" ");  // Print space for right alignment
        }
        for (j = 1; j <= i; j++) 
        {
            printf("%d ", j);  // Print the current number followed by a space
        }

        for (k = i - 1; k >= 1; k--) 
        {
            printf("%d ", k);  // Print the current number in reverse order followed by a space
        }
        printf("\n");  // Move to the next line after printing each row
    }
    return 0;
}
    
