#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 0;

    srand(time(0)); // Initialize random number generator
    number = rand() % 100 + 1; // Generate random number between 1 and 100

    printf("Guess the number between 1 and 100.\n");

    do
    {
        printf("Enter your guess: "); // Input user's guess
        scanf("%d", &guess);

        attempts++; // Count the attempt

        if(guess > number)
        {
            printf("Too High!\n");
        }
        else if(guess < number)
        {
            printf("Too Low!\n");
        }
        else
        {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    }
    while(guess != number);

    return 0; // End of program
}