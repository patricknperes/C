#include <stdio.h>
#include <stdlib.h>

void collectPositiveInteger(int *positiveInteger)
{
    printf("\t Collect Positive Integer\n\n");

    printf("This function will collect a positive integer from user input. Function to calculate the harmonic sum\n\n");

    printf("Enter the integer number: ");
    scanf("%d", positiveInteger);
    while (*positiveInteger < 0)
    {
        printf("\nError: Ivalid positive inter. Try Again\n\n");

        printf("Enter the integer number: ");
        scanf("%d", positiveInteger);
    }
    printf("\n");
}

void calculateHarmonicSum(int positiveInteger)
{
    printf("\t Calculate Harmonic Sum\n\n");

    printf("This function will calculate the harmonic sum for the integer provided as input.\n\n");

    float harmonicSum = 0.0;
    for (int i = 1; i <= positiveInteger; i++)
    {
        harmonicSum += 1.0 / (float)i;
    }
    printf("When the integer is %d, the harmonic sum is %.2f\n\n.", positiveInteger, harmonicSum);
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Collect Positive Integer\n");
    printf("\t 2. Calculate Harmonic Sum\n");
    printf("\t 3. Exit\n\n");
}

int main()
{
    int option, positiveInteger = -1;

    system("cls");
    printf("The C program titled 'Calculation of Harmonic Sum for a Positive Integer' then prompts the user to input a positive integer. The program continues to request input until the user provides an integer greater than zero. Once a valid value is entered, the program calculates the harmonic sum for that number and displays it on the standard output.\n\n");
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
            collectPositiveInteger(&positiveInteger);
            system("pause");
            break;
        case 2:
            system("cls");
            if (positiveInteger > 0)
            {
                calculateHarmonicSum(positiveInteger);
            }
            else
            {
                printf("\t Calculate Harmonic Sum\n\n");

                printf("This function will calculate the harmonic sum for the integer provided as input.\n\n");

                printf("Error: It's not possible to calculate the harmonic sum as the integer hasn't been collected. Please enter the number and try again.\n\n");
            }
            system("pause");
            break;
        case 3:
            system("cls");
            printf("Leaving the program\n");
            return 0;
        default:
            system("cls");
            printf("Error: Invalid option. Try again.\n\n");
            system("pause");
            break;
        }
    }
}