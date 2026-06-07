#include <stdio.h>
#include <math.h>

int armstrong(int num) 
{
    int sum = 0, original = num, digits = 0;
    
    // Count the number of digits in the number
    while (original > 0) 
    {
        original /= 10;
        digits++;
    }
    
    original = num; // Reset original to the input number
    
    // Calculate the sum of the digits raised to the power of the number of digits
    while (original > 0) 
    {
        int digit = original % 10; // Get the last digit
        sum += pow(digit, digits); // Add the digit raised to the power of digits to sum
        original /= 10; // Remove the last digit
    }
    
    return sum == num; // Check if the calculated sum is equal to the original number
}

int main() 
{
    int num;
    printf("Enter a number: "); 
    scanf("%d", &num);
    
    if (armstrong(num))  // If the function returns true, it's an Armstrong number
    {
        printf("%d is an Armstrong number.\n", num);
    } 
    else  // If the function returns false, it's not an Armstrong number
    {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    return 0;
}