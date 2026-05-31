#include <stdio.h>
#include <math.h>

int main() 
{
    int num, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);  // Read the input number
    
    if (num <= 1)  // Check if the number is less than or equal to 1 
    {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    } 
    else  // Check for factors from 2 to the square root of num
    {
        for (i = 2; i <= sqrt(num); i++)  // Loop from 2 to the square root of num
        {
            if (num % i == 0)  // If num is divisible by i, then it is not prime
            {
                isPrime = 0;  // Set isPrime to 0 if a factor is found
                break;
            }
        }
    }
    
    if (isPrime)  // If isPrime is still 1, then num is a prime number
        printf("%d is a prime number.", num);  
    else  // If isPrime is 0, then num is not a prime number
        printf("%d is not a prime number.", num);

return 0;
}