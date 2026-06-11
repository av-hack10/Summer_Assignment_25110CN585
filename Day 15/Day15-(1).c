#include <stdio.h>

int main() 
{
    int arr[100], n, i, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)  // Loop to read n integers into the array 
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)  // Loop to print the original array
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < n/2; i++)  // Loop to reverse the array by swapping elements
    {
        temp = arr[i];  // Store the value at index i in a temporary variable
        arr[i] = arr[n - i - 1];  // Assign the value from the end of the array to index i
        arr[n - i - 1] = temp;  // Assign the value from the temporary variable back to the end of the array
    }
    printf("Array after reversing: ");
    for (i = 0; i < n; i++)  // Loop to print the reversed array
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}