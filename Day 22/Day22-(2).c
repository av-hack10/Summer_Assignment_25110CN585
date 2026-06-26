#include <stdio.h>

int main()
{
    char str[200];
    int i, words = 0;

    printf("Enter a sentence: "); // Input sentence
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) // Traverse the string
    {
        if((i == 0 && str[i] != ' ' && str[i] != '\n') ||
           (str[i] != ' ' && str[i] != '\n' && str[i - 1] == ' '))
        {
            words++; // Count a new word
        }
    }

    printf("Number of words = %d", words); // Display word count

    return 0; // End of program
}