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
            printf( "* ");
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int option, integerNumber = -1;

    printf("The provided code is a C language program that allows the user to input an integer. Based on this input, the program generates a sequence of increasing numeric terms where each line displays numbers from 1 up to the current line's value. The program utilizes looping structures to create this sequence, making it easy to visualize the numbers in a pyramid-like format. The terms are displayed in the standard output (console) and are organized into multiple lines according to the number input by the user. This code serves as a simple example of how to create numeric sequences in C using nested loops.\n\n");
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