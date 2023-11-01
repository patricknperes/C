#include <stdio.h>
#include <stdlib.h>

void checkNumberIsDivisibleBy10(int number)
{
    printf(" Check If a Number is Divisible by 10\n\n");

    printf("Choose a number to check if it is divisible by 10: ");
    scanf("%d", &number);

    if (number % 10 == 0)
    {
        printf("\nThe chosen number ends in zero, that is, it is divisible by 10.\n\n");
    }
    else
    {
        printf("\nThe chosen number does not end in zero, that is, it is not divisible by 10,\n\n");
    }
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Check If a Number is Divisible by 10\n");
    printf("\t 2. Exit\n\n");
}

int main()
{
    int option, number = 0;

    system("cls");
    printf("This C program, checks if a user-entered integer is divisible by 10. If it is, it calculates and displays half of the number. If not, it notifies the user that the input does not end with zero. A simple and interactive way to practice conditional statements and basic arithmetic in C programming.\n\n");

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
            checkNumberIsDivisibleBy10(number);
            system("pause");
            break;
        case 2:
            system("cls");
            printf("Leaving the program\n");
            return 0;
        default:
            system("cls");
            printf("Invalid oprion\n\n");
            system("pause");
            break;
        }
    }
}