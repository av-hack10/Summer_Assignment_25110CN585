#include <stdio.h>
#include <math.h>

int sum(int a, int b)
{
    return a + b;  // Return the sum of a and b
}

int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Sum: %d\n", sum(n1, n2));  // Call the sum function and print the result
    return 0;
}
