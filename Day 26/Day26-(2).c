#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: "); // Input age
    scanf("%d", &age);

    if(age >= 18) // Check voting eligibility
    {
        printf("You are eligible to vote.");
    }
    else
    {
        printf("You are not eligible to vote.");
    }

    return 0; // End of program
}