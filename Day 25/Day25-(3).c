#include <stdio.h>
#include <string.h>

int main()
{
    char names[20][50], temp[50];
    int n, i, j;

    printf("Enter number of names: "); // Input number of names
    scanf("%d", &n);

    printf("Enter the names:\n"); // Input names
    for(i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }

    for(i = 0; i < n - 1; i++) // Sort names alphabetically
    {
        for(j = i + 1; j < n; j++)
        {
            if(strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]); // Swap names
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Names in alphabetical order:\n"); // Display sorted names
    for(i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0; // End of program
}