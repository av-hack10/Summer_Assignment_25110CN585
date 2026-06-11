#include <stdio.h>

int main() 
{
    int arr[100], n, i, first;
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
    first = arr[0];  // Store the first element of the array in a variable
    for (i = 0; i < n - 1; i++)  // Loop to shift elements to the left
    {
        arr[i] = arr[i + 1];  // Assign the value from the next index to the current index
    }
    arr[n - 1] = first;  // Assign the value of the first element to the last index of the array
    printf("Array after left rotation: ");
    for (i = 0; i < n; i++)  // Loop to print the array after left rotation
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}