#include <stdio.h>

long long factorial(int n)  
{
    if (n == 0 || n == 1)  // Base case: factorial of 0 or 1 is 1
    {
        return 1;
    }
    return n * factorial(n - 1);  // Recursive case: n! = n * (n-1)! for n > 1
}

int main() 
{
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    long long result = factorial(n);  // Calculate factorial using the recursive function
    printf("Factorial of %d is %lld\n", n, result);

    return 0;
}
