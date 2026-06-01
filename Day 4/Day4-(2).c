#include <stdio.h>
#include <math.h>

int main() 
{
    int n;
    unsigned long long first = 0, second = 1, next;
    printf("Enter the position of the Fibonacci number: ");
    scanf("%d", &n);
    if (n < 0) 
    {
        printf("Error: Position cannot be negative.\n");
        return 1; // Exit with an error code
    }
    else if (n == 0) 
    {
        printf("Fibonacci number at position %d is: %llu\n", n, first);
        return 0; // Exit successfully
    }
    else if (n == 1) 
    {
        printf("Fibonacci number at position %d is: %llu\n", n, second);
        return 0; // Exit successfully
    }
    for (int i = 2; i <= n; i++)  // Loop to calculate Fibonacci number at position n
    {
        next = first + second;  // The next Fibonacci number is the sum of the previous two numbers
        first = second;  // Update first to the previous second
        second = next;  // Update second to the new next
    }
    printf("Fibonacci number at position %d is: %llu\n", n, next);
    return 0; // Exit successfully
}