#include <stdio.h>
#include <stdlib.h>

static float heightChico = 1.50;
static float heightZe = 1.30;

int calculateHeight()
{
    int years = 0;
    while (heightChico >= heightZe)
    {
        heightChico += 0.02;
        heightZe += 0.03;
        years++;
    }
    return years;
}

void printRules()
{
    printf("PROGRAM RULES\n\n");
    printf("The C code presents a simple program that calculates how many years it will take for Ze (with an initial height of 1.30 meters) to surpass Chico (with an initial height of 1.50 meters) as they grow at different rates. The program runs a loop as long as Chico's height is greater than or equal to Ze's height, incrementing both of their heights during each iteration. When Ze eventually surpasses Chico's height, the program prints the number of years it took for this to happen.\n\n");
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Print Rules\n");
    printf("\t 2. How Long Until Ze Surpasses Chico?\n");
    printf("\t 3. Exit\n\n");
}

int main()
{
    int option;

    system("cls");
    printf("The C code presents a simple program that calculates how many years it will take for Ze (with an initial height of 1.30 meters) to surpass Chico (with an initial height of 1.50 meters) as they grow at different rates. The program runs a loop as long as Chico's height is greater than or equal to Ze's height, incrementing both of their heights during each iteration. When Ze eventually surpasses Chico's height, the program prints the number of years it took for this to happen.\n\n");

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
            printf("How Long Until Ze Surpasses Chico?\n\n");
            printf("Ze will take %d years to surpass Chico.\n\n", calculateHeight());
            system("pause");
            break;
        case 3:
            system("cls");
            printf("Leaving the program\n");
            return 0;
            break;
        default:
            system("cls");
            printf("Invalid oprion\n\n");
            system("pause");
            break;
        }
    }
}