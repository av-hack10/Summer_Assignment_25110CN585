#include <stdio.h>
#include <math.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Max: %d\n", max(n1, n2));
    return 0;
}