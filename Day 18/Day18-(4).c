#include <stdio.h>

int main()
{
    int n, i, j, temp;

    printf("Enter the number of elements: ");          // Input size of array
    scanf("%d", &n);

    int arr[n];                                        // Declare array

    printf("Enter %d elements:\n", n);                 // Input array elements

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sort array in descending order
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] < arr[j])                        // Swap if current element is smaller
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Array in descending order:\n");            // Display sorted array

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;                                          // End of program
}