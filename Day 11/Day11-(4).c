#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    if (n < 0) return -1; // Error for negative numbers
    if (n == 0) return 1; // Base case
    return n * factorial(n - 1);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = factorial(n);
    if (result == -1)
        printf("Error: Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d is %d\n", n, result);
    return 0;
}