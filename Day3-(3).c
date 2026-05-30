# include <stdio.h>
# include <math.h>

int main() 
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while (b != 0) 
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("GCD of the two numbers is: %d\n", a);
    return 0;
}