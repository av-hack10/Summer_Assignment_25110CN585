# include <stdio.h>
# include <math.h>

int main() 
{
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;  // Start with the larger of the two numbers
    while (1)  // Infinite loop until we find the LCM 
    {
        if (max % a == 0 && max % b == 0)  // Check if max is divisible by both a and b
        {
            printf("LCM of the two numbers is: %d\n", max);  // If it is, we have found the LCM
            break;
        }
        max++;
    }
    return 0;
}