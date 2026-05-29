#include <stdio.h>
#include <math.h>

int main() 
{
    int n,x,reverse=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        x=n%10;
        reverse=reverse*10+x;
        n=n/10;
    }
    printf("Reverse of the number is: %d\n",reverse);
    return 0;
}