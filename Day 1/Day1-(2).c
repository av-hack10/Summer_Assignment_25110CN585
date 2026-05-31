#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,mul;
    printf("Enter your number:");
    scanf("%d",&n);  

    printf("Multiplication table of the number %d is:\n",n);
    for( i=1; i<=10; i++)  //for(i=1; i<=pow(2,n); i++)
    {
        mul = n * i;  //sul = pow(2,i);
        printf("%d x %d = %d\n",n,i,mul);  
    }
    return 0;
}