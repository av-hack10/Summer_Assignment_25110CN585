#include <stdio.h>

int main() 
{
    int n, i, j, temp;

    printf("Enter the number of elements: ");      // Input size of array
    scanf("%d", &n);

    int arr[n];                                    // Declare array

    printf("Enter %d elements:\n", n);             // Input array elements
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort
    for(i = 0; i < n - 1; i++)  // Number of passes
     {                   
        for(j = 0; j < n - i - 1; j++)  // Compare adjacent elements 
        {           
            if(arr[j] > arr[j + 1])   // Swap if elements are in wrong order
            {             
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array in ascending order:\n");  // Display sorted array
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;                                      // End of program
}