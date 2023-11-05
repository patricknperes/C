#include <stdio.h>
#include <stdlib.h>

static int year = 365;
static int month = 30;

void collectUserData(int *userYear, int *userMonth, int *userDays)
{
    printf("\t Collect User Data\n\n");

    printf("This option enables the user to provide their age, including days, months, and years.\n\n");

    printf("Please enter your age in years: ");
    scanf("%d", userYear);
    while (*userYear < 0)
    {
        printf("\nError: It is not possible to store a negative age.\n\n");

        printf("Please enter your age in years: ");
        scanf("%d", userYear);
    }

    printf("Please enter your age in months: ");
    scanf("%d", userMonth);
    while (*userMonth < 0)
    {
        printf("\nError: It is not possible to store a negative age.\n\n");

        printf("Please enter your age in months: ");
        scanf("%d", userMonth);
    }

    printf("Please enter your age in days: ");
    scanf("%d", userDays);
    while (*userDays < 0)
    {
        printf("\nError: It is not possible to store a negative age.\n\n");

        printf("Please enter your age in days: ");
        scanf("%d", userDays);
    }

    printf("\n");
}

void printAge(int userYear, int userMonth, int userDays)
{
    printf("\t Print Age\n\n");

    printf("This option displays the age in years, months, and days.\n\n");

    printf("Based on the provided data, your age is %d years, %d months, and %d days.\n\n", userYear, userMonth, userDays);
}

void calculateAgeInDays(int userYear, int userMonth, int userDays)
{
    printf("\t Calculate Age In Days\n\n");

    printf("This option prints the provided age in days.\n\n");

    int daysAge = (userYear * year) + (userMonth * month) + userDays;
    printf("Based on the provided data, the user's age in days is %d\n\n", daysAge);
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Collect User Data\n");
    printf("\t 2. Print Age\n");
    printf("\t 3. Calculate Age In Days\n");
    printf("\t 4. Exit\n\n");
}

int main()
{
    int option, userYear = -1, userMonth, userDays;

    system("cls");
    printf("The provided code is a C program that allows the user to input their age in years, months, and days and then uses the 'idade' function to calculate the age in days. The result is displayed on the screen. Prompts the user to input their age in years, months, and days, respectively. Next, the 'idada' function is called to perform the calculation, and the result is displayed on the screen, indicating the age in days. This program demonstrates the use of functions in C for performing simple calculations.\n\n");

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
            collectUserData(&userYear, &userMonth, &userDays);
            system("pause");
            break;
        case 2:
            system("cls");
            if (userYear > 0)
            {
                printAge(userYear, userMonth, userDays);
            }
            else
            {
                printf("\t Print Age\n\n");

                printf("This option displays the age in years, months, and days.\n\n");

                printf("Error: This operation cannot be performed as the age has not been collected.\n\n");
            }
            system("pause");
            break;
        case 3:
            system("cls");
            if (userYear > 0)
            {
                calculateAgeInDays(userYear, userMonth, userDays);
            }
            else
            {
                printf("\t Calculate Age In Days\n\n");

                printf("This option prints the provided age in days.\n\n");

                printf("Error: This operation cannot be performed as the age has not been collected.\n\n");
            }
            system("pause");
            break;
        case 4:
            system("cls");
            printf("Leaving the program.\n");
            return 0;
        default:
            system("cls");
            printf("Error: Invalid option. Try again.\n\n");
            system("pause");
            break;
        }
    }
}