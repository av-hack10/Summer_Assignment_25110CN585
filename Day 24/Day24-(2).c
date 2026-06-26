#include <stdio.h>

int main()
{
    char str[100];
    int i, count;

    printf("Enter a string: "); // Input string
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count = 1; // Initialize count

        while(str[i] == str[i + 1])
        {
            count++; // Count consecutive characters
            i++;
        }

        printf("%c%d", str[i], count); // Print compressed form
    }

    return 0; // End of program
}