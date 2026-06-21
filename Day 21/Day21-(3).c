#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int vowels = 0, consonants = 0, i = 0;

    printf("Enter a string: ");   // Input string from user
    fgets(str, sizeof(str), stdin);   // Read the string

    while (str[i] != '\0')   // Traverse the string
    {
        char ch = tolower(str[i]);   // Convert character to lowercase

        if (ch >= 'a' && ch <= 'z')   // Check if character is an alphabet
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')   // Check for vowel
            {
                vowels++;   // Increment vowel count
            }
            else
            {
                consonants++;   // Increment consonant count
            }
        }

        i++;   // Move to next character
    }

    printf("Number of vowels = %d\n", vowels);   // Display vowel count
    printf("Number of consonants = %d\n", consonants);   // Display consonant count

    return 0;   // End of program
}