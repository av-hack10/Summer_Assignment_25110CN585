#include <stdio.h>

int main() 
{
    int n, i, arr[100], max, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);  // Read an integer and store it in the array at index i
    }
    printf("The array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);  // Print the integer at index i followed by a space
    }
    printf("\n");
    max = arr[0];  // Initialize max and
    min = arr[0];  // Initialize min to the first element of the array
    for (i = 1; i < n; i++)  // Loop to find the maximum and minimum elements in the array
    {
        if (arr[i] > max)  // If the integer at index i is greater than the current max, update max
        {
            max = arr[i];  // Update max to the integer at index i
        }
        if (arr[i] < min)  // If the integer at index i is less than the current min, update min
        {
            min = arr[i];  // Update min to the integer at index i
        }
    }
    printf("The maximum element is: %d\n", max);
    printf("The minimum element is: %d\n", min);
    return 0;
}