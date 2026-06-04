#include <stdio.h>

int fibonacci(int n) 
{
    if (n == 0)  // Base case: Fibonacci of 0 is 0
    {
        return 0;
    }
    else if (n == 1)  // Base case: Fibonacci of 1 is 1 
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case: F(n) = F(n-1) + F(n-2) for n > 1
}

int main() 
{
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("Fibonacci is not defined for negative numbers.\n");
        return 1;
    }

    int result = fibonacci(n);  // Calculate Fibonacci using the recursive function
    printf("Fibonacci of %d is %d\n", n, result);

    return 0;
}
