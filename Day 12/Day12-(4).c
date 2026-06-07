#include <stdio.h>
#include <math.h>

int perfect(int num) 
{
    int sum = 0;
    for (int i = 1; i < num; i++) // Loop from 1 to num-1
    {
        if (num % i == 0) // If i is a divisor of num
        {
            sum += i; // Add the divisor to the sum
        }
    }
    return sum == num; // Check if the sum of divisors is equal to the original number
}

int main() 
{
    int num;
    printf("Enter a number: "); 
    scanf("%d", &num);
    
    if (perfect(num))  // If the function returns true, it's a perfect number
    {
        printf("%d is a perfect number.\n", num);
    } 
    else  // If the function returns false, it's not a perfect number
    {
        printf("%d is not a perfect number.\n", num);
    }
    
    return 0;
}
