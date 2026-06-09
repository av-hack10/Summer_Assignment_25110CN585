#include <stdio.h>

int main() 
{
    int n, i, arr[100], largest, second_largest;  // Declare variables for array size, loop index, and the array itself
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
    largest = second_largest = arr[0];  // Initialize largest and second largest to the first element of the array
    for (i = 1; i < n; i++)  // Loop to find the largest and second largest elements in the array 
    {
        if (arr[i] > largest)  // If the current element is greater than the largest
        {
            second_largest = largest;  // Update second largest to the previous largest
            largest = arr[i];  // Update largest to the current element
        }
        else if (arr[i] > second_largest && arr[i] != largest)  // If the current element is greater than second largest and not equal to largest
        {
            second_largest = arr[i];  // Update second largest to the current element
        }
    }
    printf("The largest element is %d and the second largest element is %d.\n", largest, second_largest);
    return 0;
}