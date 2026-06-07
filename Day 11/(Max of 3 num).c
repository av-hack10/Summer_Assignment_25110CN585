#include <stdio.h>
#include <math.h>

int max(int a, int b, int c)
{
    int max_ab = (a > b) ? a : b;  // Find the maximum of a and b
    return (max_ab > c) ? max_ab : c;  // Compare the maximum of a and b with c and return the greatest
}

int main()
{
    int n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("Max: %d\n", max(n1, n2, n3));  // Call the max function and print the result
    return 0;
}