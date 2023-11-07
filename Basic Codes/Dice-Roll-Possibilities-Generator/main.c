#include <stdio.h>
#include <stdlib.h>

void mainMenu();
void printRules();
void printsPossibility();

int main()
{
    int option;

    system("cls");
    printf("The provided C code is a simple program that generates all the possible combinations of rolling four six-sided dice. It uses four nested loops to iterate through all possible combinations of dice values (from 1 to 6) and then prints these combinations in the format ' d1 - d2 - d3 - d4'. The program serves as a demonstration of how to generate all possible outcomes when rolling four dice and can be useful in scenarios related to board games, simulations, or statistical analysis.\n\n");
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
            printRules();
            system("pause");
            break;
        case 2:
            system("cls");
            printsPossibility();
            system("pause");
            break;
        case 3:
            system("cls");
            printf("Leaving the program.\n");
            return 0;
        default:
            system("cls");
            printf("Error: Invalid oprion. Try again.\n\n");
            system("pause");
            break;
        }
    }
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Print Rules\n");
    printf("\t 2. Prints Possibility\n");
    printf("\t 3. Exit\n\n");
}

void printRules()
{
    printf("\t Print Rules\n\n");

    printf("This option is responsible for displaying the system rules.\n\n");

    printf("The provided C code is a simple program that generates all the possible combinations of rolling four six-sided dice. It uses four nested loops to iterate through all possible combinations of dice values (from 1 to 6) and then prints these combinations in the format ' d1 - d2 - d3 - d4'. The program serves as a demonstration of how to generate all possible outcomes when rolling four dice and can be useful in scenarios related to board games, simulations, or statistical analysis.\n\n");
}

void printsPossibility()
{
    printf("\t Prints Possibility\n\n");

    printf("This option is responsible for printing all possible dice roll outcomes.\n\n");

    printf("Printing The Possibilities.\n\n");

    int possibilities = 0;
    for (int givenAway01 = 1; givenAway01 <= 6; givenAway01++)
    {
        for (int givenAway02 = 1; givenAway02 <= 6; givenAway02++)
        {
            for (int givenAway03 = 1; givenAway03 <= 6; givenAway03++)
            {
                for (int givenAway04 = 1; givenAway04 <= 6; givenAway04++)
                {
                    printf("%d - %d - %d - %d", givenAway01, givenAway02, givenAway03, givenAway04);
                    printf("\n");
                    possibilities++;
                }
            }
        }
    }
    printf("\n");

    printf("There are a total of %d possibilities.\n\n", possibilities);
}