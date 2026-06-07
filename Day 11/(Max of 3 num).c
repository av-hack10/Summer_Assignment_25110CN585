#include <stdio.h>
#include <math.h>

int max(int a, int b, int c)
{
    int max_ab = (a > b) ? a : b;
    return (max_ab > c) ? max_ab : c;
}

int main()
{
    int n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("Max: %d\n", max(n1, n2, n3));
    return 0;
}