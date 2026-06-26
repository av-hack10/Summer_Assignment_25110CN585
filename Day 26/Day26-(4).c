#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("Quiz Application\n");

    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: "); // Input answer for Question 1
    scanf("%d", &answer);

    if(answer == 2)
    {
        score++; // Increase score for correct answer
    }

    printf("\n2. Which language is used for C programming?\n");
    printf("1. Compiler\n2. Interpreter\n3. Programming Language\n4. Operating System\n");
    printf("Enter your answer: "); // Input answer for Question 2
    scanf("%d", &answer);

    if(answer == 3)
    {
        score++; // Increase score for correct answer
    }

    printf("\n3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: "); // Input answer for Question 3
    scanf("%d", &answer);

    if(answer == 3)
    {
        score++; // Increase score for correct answer
    }

    printf("\nYour Score: %d/3\n", score); // Display final score

    return 0; // End of program
}