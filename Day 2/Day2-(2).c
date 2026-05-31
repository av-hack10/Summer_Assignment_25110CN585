#include <stdio.h>
#include <math.h>

int main() 
{
    int n,x,reverse=0;
    printf("Enter the number: ");
    scanf("%d",&n);  // Read the input number

    while(n!=0)  // Loop until n becomes 0
    {
        x=n%10;  // get last digit
        reverse=reverse*10+x;  // append last digit to reverse
        n=n/10;      // remove last digit
    }
    printf("Reverse of the number is: %d\n",reverse);
    return 0;
}