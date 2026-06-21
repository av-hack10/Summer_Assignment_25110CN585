#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a lowercase string: "); // Input string from user
    fgets(str, sizeof(str), stdin); // Read the string

    while (str[i] != '\0') // Traverse the string
    {
        if (str[i] >= 'a' && str[i] <= 'z') // Check for lowercase letter
        {
            str[i] = str[i] - 32; // Convert to uppercase
        }

        i++; // Move to next character
    }

    printf("Uppercase string: %s", str); // Display uppercase string

    return 0; // End of program
}