#include <stdio.h>

int main() 
{
    int n, i, j, arr[100];  // Declare variables for array size, loop indices, and the array itself
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
    printf("The duplicate elements in the array are: ");
    for (i = 0; i < n; i++)  // Loop to find duplicate elements in the array 
    {
        for (j = i + 1; j < n; j++)  // Inner loop to compare the current element with the rest of the elements
        {
            if (arr[i] == arr[j])  // If a duplicate is found
            {
                printf("%d ", arr[i]);  // Print the duplicate element
                break;  // Break to avoid printing the same duplicate multiple times
            }
        }
    }
    printf("\n");
    return 0;
}