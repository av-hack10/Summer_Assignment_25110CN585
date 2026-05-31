#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,sum=0;
    printf("Enter the number of terms:");
    scanf("%d",&n);  
    for( i=1; i<=n; i++)  //for(i=1; i<=pow(2,n); i++)
    {
        sum = sum + i;  //sum = sum + pow(2,i);
    }
    printf("sum = %d",sum);  
    return 0;
}