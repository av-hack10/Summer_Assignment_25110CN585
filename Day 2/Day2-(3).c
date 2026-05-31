#include <stdio.h>
#include <math.h>
int main() 
{
   int num, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);  // Read the input number

    while (num != 0)  // Loop until num becomes 0
    {
        product *= num % 10;  // get last digit and multiply with product
        num /= 10;        // remove last digit
    }
    printf("Product of digits = %d\n", product);
    return 0;
}