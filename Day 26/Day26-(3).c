#include <stdio.h>

int main()
{
    int choice;
    float balance = 10000.0, amount;

    do
    {
        printf("\nATM Menu\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter your choice: "); // Input user's choice
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Current Balance: %.2f\n", balance); // Display balance
                break;

            case 2:
                printf("Enter deposit amount: "); // Input deposit amount
                scanf("%f", &amount);

                balance += amount; // Add amount to balance
                printf("Amount Deposited Successfully.\n");
                break;

            case 3:
                printf("Enter withdrawal amount: "); // Input withdrawal amount
                scanf("%f", &amount);

                if(amount <= balance) // Check sufficient balance
                {
                    balance -= amount;
                    printf("Please collect your cash.\n");
                }
                else
                {
                    printf("Insufficient Balance.\n");
                }

                break;

            case 4:
                printf("Thank you for using the ATM.\n"); // Exit message
                break;

            default:
                printf("Invalid Choice.\n"); // Invalid menu option
        }
    }
    while(choice != 4);

    return 0; // End of program
}