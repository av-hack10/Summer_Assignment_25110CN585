#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};
    int i, flag = 1;

    printf("Enter first string: "); // Input first string
    scanf("%s", str1);

    printf("Enter second string: "); // Input second string
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)) // Check lengths
    {
        flag = 0;
    }
    else
    {
        for(i = 0; str1[i] != '\0'; i++) // Count characters of first string
        {
            freq1[(int)str1[i]]++;
        }

        for(i = 0; str2[i] != '\0'; i++) // Count characters of second string
        {
            freq2[(int)str2[i]]++;
        }

        for(i = 0; i < 256; i++) // Compare frequencies
        {
            if(freq1[i] != freq2[i])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag) // Display result
    {
        printf("Strings are Anagrams");
    }
    else
    {
        printf("Strings are Not Anagrams");
    }

    return 0; // End of program
}