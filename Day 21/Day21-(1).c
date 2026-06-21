#include <stdio.h>

int main()
{
    char str[100];                    // Declare a character array to store the string
    int length = 0;                   // Variable to store the length of the string

    printf("Enter a string: ");       // Prompt the user to enter a string
    fgets(str, sizeof(str), stdin);   // Read the string from the user

    while (str[length] != '\0')       // Loop until the null character is found
    {
        length++;                     // Increment the length counter
    }

    if (str[length - 1] == '\n')      // Check if the last character is a newline
    {
        length--;                     // Exclude the newline from the length
    }

    printf("Length of the string = %d\n", length);  // Display the string length

    return 0;                         // Indicate successful program execution
}