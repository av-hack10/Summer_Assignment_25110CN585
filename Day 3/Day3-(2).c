# include <stdio.h>
# include <math.h>

int main() 
{
    int start, end, i, j, isPrime;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are: ", start, end);
    for (i = start; i <= end; i++)  // Loop through numbers from start to end
    {
        if (i <= 1)  // Check if the number is less than or equal to 1
        {
            continue;  // Skip numbers less than or equal to 1 as they are not prime
        }
        isPrime = 1;  // Assume i is prime until proven otherwise
        for (j = 2; j <= sqrt(i); j++)  // Loop from 2 to the square root of i
        {
            if (i % j == 0)  // If i is divisible by j, then it is not prime
            {
                isPrime = 0;  // Set isPrime to 0 if a factor is found
                break;
            }
        }
        if (isPrime)  // If isPrime is still 1, then i is a prime number
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
