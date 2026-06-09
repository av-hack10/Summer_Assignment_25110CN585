#include <stdio.h>

int main() 
{
    int n, i, key, arr[100];  // Declare variables for array size, loop index, search key, and the array itself
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)  // Loop to read elements into the array 
    {
        scanf("%d", &arr[i]);  // Read each element from user input
    }
    for (i = 0; i < n; i++)  // Loop to display the elements of the array 
    {
        printf("%d ", arr[i]);  // Print each element followed by a space
    }
    printf("\n");
    printf("Enter the key to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)  // Loop to search for the key in the array
    {
        if (arr[i] == key)  // If the current element matches the key 
        {
            printf("Element found at index: %d\n", i);
            return 0;
        }
    }
    printf("Element not found in the array.\n");
    return 0;
}