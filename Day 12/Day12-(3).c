#include <stdio.h>
#include <math.h>

void fibonacci(int n)
{
    int a = 0, b = 1, next;
    printf("Fibonacci series up to %d: ", n);
    while (a <= n) 
    {
        printf("%d ", a); // Print the current Fibonacci number
        next = a + b; // Calculate the next Fibonacci number
        a = b; // Update a to the current b
        b = next; // Update b to the next Fibonacci number
    }
    printf("\n");
}

int main() 
{
    int n;
    printf("Enter a number: "); 
    scanf("%d", &n);
    
    fibonacci(n); // Call the function to print Fibonacci series up to n
    
    return 0;
}

