#include <stdio.h>

int main()
{
    char str[100];
    int freq[256] = {0};
    int i, max = 0;
    char maxChar;

    printf("Enter a string: "); // Input string
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) // Count frequency of each character
    {
        freq[(unsigned char)str[i]]++;
    }

    for(i = 0; i < 256; i++) // Find maximum occurring character
    {
        if(freq[i] > max && i != '\n')
        {
            max = freq[i];
            maxChar = i;
        }
    }

    printf("Maximum occurring character: %c\n", maxChar); // Display character
    printf("Frequency: %d", max); // Display frequency

    return 0; // End of program
}