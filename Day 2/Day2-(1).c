#include <stdio.h>
#include <math.h>

int main() 
{
   int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);  // Read the input number

    while (num != 0)  // Loop until num becomes 0
    {
        sum += num % 10;  // get last digit
        num /= 10;        // remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}

