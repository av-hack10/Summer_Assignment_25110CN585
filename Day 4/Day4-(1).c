#include <stdio.h>
#include <math.h>

int main() 
{
    int n, i;
    unsigned long long first = 0, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++)  // Loop to generate Fibonacci series up to n terms
    {
        if (i <= 1)  // For the first two terms, the Fibonacci number is the same as the index
            next = i;  // For i=0, next=0; for i=1, next=1
        else  // For terms greater than 1, calculate the next Fibonacci number
        {
            next = first + second;  // The next Fibonacci number is the sum of the previous two numbers
            first = second;  // Update first to the previous second
            second = next;  // Update second to the new next
        }
        printf("%llu ", next);
    }
    printf("\n");
    return 0;
}
