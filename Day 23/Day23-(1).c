#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count;
    int found = 0;

    printf("Enter a string: "); // Input string
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) // Check each character
    {
        count = 0;

        for(j = 0; str[j] != '\0' && str[j] != '\n'; j++) // Count frequency
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }

        if(count == 1)
        {
            printf("First non-repeating character: %c", str[i]); // Display result
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("No non-repeating character found");
    }

    return 0; // End of program
}