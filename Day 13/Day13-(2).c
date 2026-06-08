#include <stdio.h>

int main() 
{
    int n, i, arr[100], sum = 0; 
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);  // Read an integer and store it in the array at index i
        
    }
    printf("The array is:\n");
    for (i = 0; i < n; i++)   
    {
        printf("%d ", arr[i]);  // Print the integer at index i followed by a space
    }
    printf("\n");

    printf("The sum of the array is: ");
    for (i = 0; i < n; i++)  // Loop to calculate the sum of the elements in the array
    {
        sum += arr[i];  // Add the integer at index i to the sum variable
    }
    printf("%d\n", sum);
    return 0;
}
    
