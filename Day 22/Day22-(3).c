#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: "); // Input string
    fgets(str, sizeof(str), stdin);

    printf("Enter a character: "); // Input character
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++) // Traverse the string
    {
        if(str[i] == ch)
        {
            count++; // Increase frequency count
        }
    }

    printf("Frequency of '%c' = %d", ch, count); // Display result

    return 0; // End of program
}