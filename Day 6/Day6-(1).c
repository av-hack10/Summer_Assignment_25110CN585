#include <stdio.h>

int main() 
{
    int n, binary[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    while (n > 0)  // Loop until all bits are processed
    {
        binary[i] = n % 2;  // Store the least significant bit (0 or 1) in the array
        n = n / 2;  // Right shift the bits by dividing by 2
        i++;
    }
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--)   // Print the binary digits in reverse order
    {
        printf("%d", binary[j]);
    }
    printf("\n");
    return 0;
}