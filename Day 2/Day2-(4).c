#include <stdio.h>

int main() 
{
    int num, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);  // Read the input number

    original = num;  // Store the original number for later comparison

    while (num > 0)  // Loop until num becomes 0
    {
        digit = num % 10;  // Get the last digit
        reverse = reverse * 10 + digit;  // Append the last digit to the reverse
        num = num / 10;  // Remove the last digit
    }

    if (original == reverse)  // Check if the original number is equal to its reverse
        printf("Palindrome number");  // If they are equal, it's a palindrome
    else  // If they are not equal, it's not a palindrome
        printf("Not a palindrome number");  

    return 0;
}