#include <stdio.h>

int sum_of_digits(int n) 
{
    if (n == 0)  // Base case: the sum of digits of 0 is 0
    {
        return 0;
    }
    return (n % 10) + sum_of_digits(n / 10);  // Recursive case: sum of digits = last digit + sum of digits of the rest of the number
}

int main() 
{
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("Sum of digits is not defined for negative numbers.\n");
        return 1;
    }

    int result = sum_of_digits(n);  // Calculate the sum of digits using the recursive function
    printf("Sum of digits of %d is %d\n", n, result);

    return 0;
}