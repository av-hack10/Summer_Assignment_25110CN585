#include <stdio.h>

int main() 
{
    int x, n, result = 1;
    printf("Enter the base (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);
    while (n > 0)   // Loop until the exponent is reduced to 0
    {
        if (n % 2 == 1)  // If n is odd, multiply the result by x
        {
            result *= x;
        }
        x *= x;  // Square the base
        n = n / 2;  // Right shift the exponent by dividing by 2
    }
    printf("Result: %d\n", result);
    return 0;
}

