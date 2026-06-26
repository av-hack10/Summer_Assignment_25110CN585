#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i, j, k;

    printf("Enter size of first sorted array: "); // Input size of first array
    scanf("%d", &n1);

    printf("Enter elements of first sorted array:\n"); // Input first array
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second sorted array: "); // Input size of second array
    scanf("%d", &n2);

    printf("Enter elements of second sorted array:\n"); // Input second array
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    while(i < n1 && j < n2) // Merge both arrays
    {
        if(arr1[i] <= arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }

    while(i < n1) // Copy remaining elements of first array
    {
        merged[k++] = arr1[i++];
    }

    while(j < n2) // Copy remaining elements of second array
    {
        merged[k++] = arr2[j++];
    }

    printf("Merged sorted array: "); // Display merged array
    for(i = 0; i < k; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0; // End of program
}