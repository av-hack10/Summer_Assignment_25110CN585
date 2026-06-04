#include <stdio.h>

int reversenumber(int n) 
{
    if (n == 0)  // Base case: the reverse of 0 is 0
    {
        return 0;
    }
    return reversenumber(n / 10) * 10 + (n % 10);  // Recursive case: reverse of n = reverse of n/10 * 10 + last digit of n
}
    
int main() 
{
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("Reverse is not defined for negative numbers.\n");
        return 1;
    }

    int result = reversenumber(n);  // Calculate the reverse of the number using the recursive function
    printf("Reverse of %d is %d\n", n, result);

    return 0;
}