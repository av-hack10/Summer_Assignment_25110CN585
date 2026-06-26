#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int i, len;

    printf("Enter a string: "); // Input string
    scanf("%s", str);

    len = strlen(str); // Find length of string

    for(i = 0; i < len; i++) // Reverse the string
    {
        rev[i] = str[len - 1 - i];
    }

    rev[len] = '\0'; // Add null character

    if(strcmp(str, rev) == 0) // Compare original and reversed strings
    {
        printf("Palindrome String");
    }
    else
    {
        printf("Not a Palindrome String");
    }

    return 0; // End of program
}