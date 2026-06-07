#include <stdio.h>
#include <math.h>

int pallindrome(int num) 
{
    int reversed = 0, original = num;
    while (num > 0)  // Loop until num becomes 0
    {
        reversed = reversed * 10 + num % 10;  // Append the last digit of num to reversed
        num /= 10;  // Remove the last digit from num
    }
    return original == reversed;  // Check if the original number is equal to the reversed number
}

int main() 
{
    int num;
    printf("Enter a number: "); 
    scanf("%d", &num);
    
    if (pallindrome(num))  // If the function returns true, it's a palindrome
    {
        printf("%d is a palindrome.\n", num);
    } 
    else  // If the function returns false, it's not a palindrome
    {
        printf("%d is not a palindrome.\n", num);
    }
    
    return 0;
}
