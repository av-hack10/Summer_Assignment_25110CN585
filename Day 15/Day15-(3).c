#include <stdio.h>

int main() 
{
    int arr[100], n, i, last;
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
    last = arr[n - 1];  // Store the last element of the array in a variable
    for (i = n - 1; i > 0; i--)  // Loop to shift elements to the right
    {
        arr[i] = arr[i - 1];  // Assign the value from the previous index to the current index
    }
    arr[0] = last;  // Assign the value of the last element to the first index of the array
    printf("Array after right rotation: ");
    for (i = 0; i < n; i++)  // Loop to print the array after right rotation
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
