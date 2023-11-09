#include <stdio.h>
#include <stdlib.h>

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Collect Numbers\n");
    printf("\t 2. Displays Square\n");
    printf("\t 3. Exit\n\n");
}

void collectNumbers(int numbers[])
{
    printf("You selected the first option.\n\n");

    printf("Enter 10 Integer Numbers\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Enter an %d number: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("\n");
}

void printsNegatives(int numbers[])
{
    printf("You selected the second option.\n\n");

    printf("Printing Negatives\n\n");

    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] < 0)
        {
            printf("number %d: %d\n", i + 1, numbers[i]);
            count++;
        }
    }
    printf("\nTotal negative numbers: %d\n\n", count);
}

int main()
{
    int option, numbers[10], numbersCollected = 0;

    printf("This C program allows the user to input 10 numbers and then counts the negative numbers in the provided array. The code utilizes a function called 'retorna_negativo' that iterates through the array and counts how many numbers are less than zero. After entering the numbers, the program displays the quantity of negative numbers entered by the user. This application is useful for data analysis and processing, especially when you want to identify and quantify negative values within a set of numbers.\n\n");
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
            collectNumbers(numbers);
            numbersCollected = 1;
            break;
        case 2:
            system("cls");
            if (numbersCollected)
            {
                printsNegatives(numbers);
            }
            else
            {
                printf("You selected the second option.\n\n");

                printf("Error: Negative numbers cannot be displayed as integer values were not collected.\n\n");
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