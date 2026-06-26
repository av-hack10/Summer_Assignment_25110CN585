#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], longest[100];
    int i, start = 0, len = 0, maxLen = 0;

    printf("Enter a sentence: "); // Input sentence
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++) // Traverse the sentence
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            len++; // Count current word length
        }
        else
        {
            if(len > maxLen) // Update longest word
            {
                maxLen = len;
                strncpy(longest, &str[start], len);
                longest[len] = '\0';
            }

            len = 0; // Reset word length
            start = i + 1;
        }

        if(str[i] == '\0')
        {
            break; // End of string
        }
    }

    printf("Longest word: %s\n", longest); // Display longest word
    printf("Length: %d", maxLen); // Display word length

    return 0; // End of program
}
