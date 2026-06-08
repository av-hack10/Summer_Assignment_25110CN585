#include <stdio.h>

int main() 
{
    int i, n, arr[100], evenCount = 0, oddCount = 0;
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
        if (arr[i] % 2 == 0)  // Check if the integer at index i is even
        {
            evenCount++;  // Increment the evenCount variable if the integer is even
        }
        else  // If the integer at index i is not even, it is odd
        {
            oddCount++;  // Increment the oddCount variable if the integer is odd
        }
    }
    printf("\n");
    printf("The number of even elements is: %d\n", evenCount);
    printf("The number of odd elements is: %d\n", oddCount);
    return 0;
}