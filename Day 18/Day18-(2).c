#include <stdio.h>

int main() 
{
    int n, i, j, minIndex, temp;

    printf("Enter the number of elements: ");      // Input size of array
    scanf("%d", &n);

    int arr[n];                                    // Declare array

    printf("Enter %d elements:\n", n);             // Input array elements
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Selection Sort
    for(i = 0; i < n - 1; i++)   // Move boundary of unsorted array 
    {                   
        minIndex = i;                              // Assume current element is minimum

        for(j = i + 1; j < n; j++)  // Find index of smallest element
        {               
            if(arr[j] < arr[minIndex]) 
            {
                minIndex = j;                      // Update minimum index
            }
        }

        temp = arr[i];                             // Swap current element with minimum element
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("Sorted array in ascending order:\n");  // Display sorted array
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;                                      // End of program
}