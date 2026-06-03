#include <stdio.h>
#include <math.h>

int main() 
{
    int n, decimal = 0, i = 0, rem;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    while (n > 0)   // Loop until all digits are processed
    {
        rem = n % 10;  // Get the last digit (0 or 1)
        decimal += rem * pow(2, i);  // Convert the binary digit to decimal and add to the total
        n = n / 10;  // Remove the last digit
        i++;
    }
    printf("Decimal representation: %d\n", decimal);
    return 0;
}
