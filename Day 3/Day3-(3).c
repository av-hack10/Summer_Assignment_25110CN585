# include <stdio.h>
# include <math.h>

int main() 
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while (b != 0)  // Loop until b becomes 0
    {
        temp = b;  // Store the value of b in temp
        b = a % b;  // Update b to the remainder of a divided by b
        a = temp;  // Update a to the value of temp (previous value of b)
    }
    printf("GCD of the two numbers is: %d\n", a);
    return 0;
}