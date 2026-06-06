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
            printf("%c", j + 64);  // Print uppercase letter followed by a space for better visibility
        }

        for (k = i - 1; k >= 1; k--) 
        {
            printf("%c", k + 64);  // Print uppercase letter in reverse order followed by a space for better visibility
        }
        printf("\n");  // Move to the next line after printing each row
    }
    return 0;
}
