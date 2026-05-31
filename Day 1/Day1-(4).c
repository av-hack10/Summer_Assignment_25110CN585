#include <stdio.h>
#include <math.h>

int main()
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);  // Read the input number

    while(num != 0)  // Loop until num becomes 0
    {
        num = num / 10;  // Remove the last digit
        count++;  // Increment the count of digits
    }
    printf("Number of digits = %d\n", count);

    return 0;
}