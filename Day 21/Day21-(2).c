#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];                              // Declare a character array to store the string
    int i, length;                              // Variables for loop and string length

    printf("Enter a string: ");                 // Prompt the user to enter a string
    fgets(str, sizeof(str), stdin);             // Read the string from the user

    length = strlen(str);                       // Find the length of the string

    if (str[length - 1] == '\n')                // Check if the last character is a newline
    {
        str[length - 1] = '\0';                 // Replace newline with null character
        length--;                               // Decrease the length by 1
    }

    printf("Reversed string: ");                // Display the message

    for (i = length - 1; i >= 0; i--)           // Traverse the string in reverse order
    {
        printf("%c", str[i]);                   // Print each character in reverse
    }

    printf("\n");                               // Move to the next line

    return 0;                                   // Indicate successful execution
}