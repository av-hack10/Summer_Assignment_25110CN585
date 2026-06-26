#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j;
    int printed[256] = {0};

    printf("Enter first string: "); // Input first string
    scanf("%s", str1);

    printf("Enter second string: "); // Input second string
    scanf("%s", str2);

    printf("Common characters: "); // Display common characters

    for(i = 0; str1[i] != '\0'; i++) // Traverse first string
    {
        for(j = 0; str2[j] != '\0'; j++) // Compare with second string
        {
            if(str1[i] == str2[j] && printed[(unsigned char)str1[i]] == 0)
            {
                printf("%c ", str1[i]); // Print common character
                printed[(unsigned char)str1[i]] = 1;
                break;
            }
        }
    }

    return 0; // End of program
}