#include <stdio.h>

int main() 
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) 
    {
        count += num % 2; // Increment count if the least significant bit is 1
        num = num / 2; // Right shift the bits by dividing by 2
    }
    printf("Number of 1s in the binary representation: %d\n", count);
    return 0;
}