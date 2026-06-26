#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    printf("Enter first string: "); // Input first string
    scanf("%s", str1);

    printf("Enter second string: "); // Input second string
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)) // Check lengths
    {
        printf("Strings are not rotations");
    }
    else
    {
        strcpy(temp, str1); // Copy first string
        strcat(temp, str1); // Concatenate first string with itself

        if(strstr(temp, str2) != NULL) // Check rotation
        {
            printf("Strings are rotations");
        }
        else
        {
            printf("Strings are not rotations");
        }
    }

    return 0; // End of program
}