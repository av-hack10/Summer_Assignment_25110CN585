#include <stdio.h>
#include <math.h>

int prime(int n)
{
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++)  // Loop from 2 to the square root of n
        if (n % i == 0) return 0;  // If n is divisible by any number in this range, it's not prime
    return 1;  // If no divisors are found, it's a prime number
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (prime(n))  // If the function returns true, it's a prime number
        printf("%d is a prime number.\n", n);
    else  // If the function returns false, it's not a prime number
        printf("%d is not a prime number.\n", n);
    return 0;
}