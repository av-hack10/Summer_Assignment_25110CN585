#include <stdio.h>

int main()
{
    char str[100];
    int i, j;
    int found = 0;

    printf("Enter a string: "); // Input string
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) // Check each character
    {
        for(j = i + 1; str[j] != '\0' && str[j] != '\n'; j++) // Search for repetition
        {
            if(str[i] == str[j])
            {
                printf("First repeating character: %c", str[i]); // Display result
                found = 1;
                break;
            }
        }

        if(found == 1)
        {
            break; // Stop after first repeating character
        }
    }

    if(found == 0)
    {
        printf("No repeating character found");
    }

    return 0; // End of program
}