#include <stdio.h>

int main()
{
    char str[100];
    int i, j;

    printf("Enter a string: "); // Input string
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) // Traverse the string
    {
        for(j = i + 1; str[j] != '\0'; )
        {
            if(str[i] == str[j])
            {
                int k;

                for(k = j; str[k] != '\0'; k++) // Shift characters left
                {
                    str[k] = str[k + 1];
                }
            }
            else
            {
                j++; // Move to next character
            }
        }
    }

    printf("String after removing duplicates: %s", str); // Display result

    return 0; // End of program
}