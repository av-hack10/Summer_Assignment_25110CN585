#include <stdio.h>

int main()
{
    char str[100];
    int i, j = 0;

    printf("Enter a string: "); // Input string
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) // Traverse the string
    {
        if(str[i] != ' ')
        {
            str[j] = str[i]; // Copy non-space characters
            j++;
        }
    }

    str[j] = '\0'; // Terminate the new string

    printf("String after removing spaces: %s", str); // Display result

    return 0; // End of program
}