#include <stdio.h>
#include <math.h>

int main() 
{
    int num, originalNum, remainder, result = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;  // Store the original number for later comparison
    while (originalNum != 0)  // Loop to calculate the sum of the cubes of the digits
    {
        remainder = originalNum % 10;  // Get the last digit
        result += remainder * remainder * remainder;  // Add the cube of the digit to the result
        originalNum /= 10;  // Remove the last digit
    }
    if (result == num)  // Check if the result is equal to the original number
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0; // Exit successfully
}