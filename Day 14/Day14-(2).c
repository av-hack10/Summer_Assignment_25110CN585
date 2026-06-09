#include <stdio.h>

int main() 
{
    int n, i, element, arr[100], count = 0;  // Declare variables for array size, loop index, element to count, the array itself, and count of occurrences
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
    printf("Enter the element to count: ");
    scanf("%d", &element);
    for (i = 0; i < n; i++)  // Loop to count occurrences of the element
    {
        if (arr[i] == element)  // If the current element matches the element to count
        {
            count++;  // Increment the count
        }
    }
    printf("The element %d occurs %d times in the array.\n", element, count);
    return 0;
}