#include <stdio.h>

int main() 
{
    int n, i, arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)  // Loop to read n integers into the array
    {
        scanf("%d", &arr[i]);  // Read an integer and store it in the array at index i
    }
    printf("The array is:\n");  // Print the elements of the array
    for (i = 0; i < n; i++)  // Loop to print the elements of the array
    {
        printf("%d ", arr[i]);  // Print the integer at index i followed by a space
    }
    printf("\n");
    return 0;
}