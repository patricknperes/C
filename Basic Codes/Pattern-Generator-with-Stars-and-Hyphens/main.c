#include <stdio.h>
#include <stdlib.h>

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Collect Whole Number\n");
    printf("\t 2. Displays Square\n");
    printf("\t 3. Exit\n\n");
}

void collectWholeNumber(int *integerNumber)
{
    printf("You selected the first option.\n\n");

    printf("Enter an integer number: ");
    scanf("%d", integerNumber);
    while (*integerNumber <= 0)
    {
        printf("Error: Invalid number. Please try again.\n\n");

        printf("Enter an integer number: ");
        scanf("%d", integerNumber);
    }

    printf("\n");
}

void printingTheSquare(int integerNumber)
{
    printf("You selected the second option.\n\n");

    printf("Printing The Square\n\n");

    for (int i = 0; i < integerNumber; i++)
    {
        for (int j = 0; j < integerNumber; j++)
        {
            if (i == j)
            {
                printf(" @ ");
            }
            else
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int option, integerNumber = -1;

    printf("This C program is a Pattern Generator that uses stars (*) and hyphens (-) to create a visual pattern in the form of a matrix. The user is prompted to input the desired number of terms, and the program then creates a square matrix where the main diagonal is filled with hyphens, while the rest of the matrix is filled with stars. The result is an interesting display of visual patterns that can vary depending on the chosen number of terms. This code is a simple example of loop and control structure manipulation in C.\n\n");
    system("pause");

    while (1)
    {
        system("cls");
        mainMenu();
        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            system("cls");
            collectWholeNumber(&integerNumber);
            break;
        case 2:
            system("cls");
            if (integerNumber > 0)
            {
                printingTheSquare(integerNumber);
            }
            else
            {
                printf("You selected the second option.\n\n");

                printf("Error: It's not possible to print the square because no integer number was collected. Please enter an integer first in order to visualize the square.\n\n");
            }
            break;
        case 3:
            system("cls");
            printf("Leaving the program.\n");
            return 0;
        default:
            system("cls");
            printf("Error: Invalid option. Try again.\n\n");
            break;
        }
        system("pause");
    }
}