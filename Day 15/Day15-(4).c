#include <stdio.h>

int main() 
{
    int arr[100], n, i, j = 0, temp;
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
    for (i = 0; i < n; i++)
    {
        if(arr[i] != 0)  // Check if the current element is not zero
        {
            arr[j++] = arr[i];  // If it's not zero, assign it to the position at index j and increment j
        }
    }
    for (i = j; i < n; i++)  // Fill the remaining positions with zeros
    {
        arr[i] = 0;
    }
    printf("Array after moving zeros to the end: ");
    for (i = 0; i < n; i++)  // Loop to print the array after moving zeros
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
