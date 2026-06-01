#include <stdio.h>
#include <math.h>

int main() 
{
    int start, end, num, originalNum, remainder, result;
    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);
    printf("Armstrong numbers between %d and %d are: ", start, end);
    for (num = start; num <= end; num++)  // Loop through the range from start to end
    {
        originalNum = num;  // Store the original number for later comparison
        result = 0;  // Reset result for each number
        while (originalNum != 0)  // Loop to calculate the sum of the cubes of the digits
        {
            remainder = originalNum % 10;  // Get the last digit
            result += remainder * remainder * remainder;  // Add the cube of the digit to the result
            originalNum /= 10;  // Remove the last digit
        }
        if (result == num)  // Check if the result is equal to the original number
            printf("%d ", num);  // Print the Armstrong number
    }
    printf("\n");
    return 0; // Exit successfully
}