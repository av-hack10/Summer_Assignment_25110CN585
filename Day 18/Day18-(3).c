#include <stdio.h>

int main()
{
    int n, i, key;

    printf("Enter the number of elements: ");          // Input array size
    scanf("%d", &n);

    int arr[n];                                        // Declare array

    printf("Enter %d elements in sorted order:\n", n); // Input sorted array

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");           // Input search key
    scanf("%d", &key);

    int low = 0, high = n - 1, mid;
    int found = 0;                                     // Flag variable

    while(low <= high)
    {
        mid = (low + high) / 2;                        // Find middle index

        if(arr[mid] == key)
        {
            printf("Element found at position %d", mid + 1);
            found = 1;
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;                             // Search right half
        }
        else
        {
            high = mid - 1;                            // Search left half
        }
    }

    if(found == 0)
    {
        printf("Element not found in the array");
    }

    return 0;                                          // End of program
}