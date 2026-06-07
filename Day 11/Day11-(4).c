#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    if (n < 0) return -1; // Error for negative numbers
    if (n == 0) return 1; // Base case
    return n * factorial(n - 1);  // Recursive call: n! = n * (n-1)!
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = factorial(n);  // Call the factorial function and store the result
    if (result == -1)  // If the function returns -1, it means the input was a negative number
        printf("Error: Factorial is not defined for negative numbers.\n");
    else  // If the function returns a valid factorial value, print it
        printf("Factorial of %d is %d\n", n, result);
    return 0;
}