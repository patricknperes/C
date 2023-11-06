#include <stdio.h>
#include <stdlib.h>

void collectDate(int *day, int *month, int *year)
{
    printf("\t Collect Date\n\n");

    printf("This option allows the user to input the desired date to determine the corresponding season of the year.\n\n");

    printf("Enter the date in the format DD/MM/YYYY: ");
    scanf("%d %d %d", day, month, year);
    while ((*day <= 0 || *day > 31) || (*month <= 0 || *month > 12) || *year < 0)
    {
        printf("\nError: It is not possible to record a negative date. Please try again.\n\n");
        printf("Enter the date in the format DD/MM/YYYY: ");
        scanf("%d %d %d", day, month, year);
    }

    printf("\nYou entered the date: %d/%d/%d\n\n", *day, *month, *year);
}

void printSeason(int day, int month, int year)
{
    printf("\t Print Season\n\n");

    printf("This option prints the season according to the entered date.\n\n");

    if ((day >= 21 || day <= 31) && month == 3)
    {
        printf("On the date %d/%d/%d, the season is Autumn.\n\n", day, month, year);
    }
    else if ((day >= 1 || day <= 30) && month == 4)
    {
        printf("On the date %d/%d/%d, the season is Autumn.\n\n", day, month, year);
    }
    else if ((day >= 1 || day <= 31) && month == 5)
    {
        printf("On the date %d/%d/%d, the season is Autumn.\n\n", day, month, year);
    }
    else if ((day >= 1 || day <= 20) && month == 6)
    {
        printf("On the date %d/%d/%d, the season is Autumn.\n\n", day, month, year);
    }
    else if ((day >= 21 || day <= 30) && month == 6)
    {
        printf("On the date %d/%d/%d, the season is Winter.\n\n", day, month, year);
    }
    else if ((day >= 1 || day <= 31) && month == 7)
    {
        printf("On the date %d/%d/%d, the season is Winter.\n\n", day, month, year);
    }
    else if ((day >= 1 || day <= 31) && month == 8)
    {
        printf("On the date %d/%d/%d, the season is Winter.\n\n", day, month, year);
    }
    else if ((day >= 1 || day <= 22) && month == 9)
    {
        printf("On the date %d/%d/%d, the season is Winter.\n\n", day, month, year);
    }
    else if ((day >= 23 || day <= 30) && month == 9)
    {
        printf("On the date %d/%d/%d, the season is Spring.\n\n", day, month, year);
    }
    else if ((day >= 1 || day <= 31) && month == 10)
    {
        printf("On the date %d/%d/%d, the season is Spring.\n\n", day, month, year);
    }
    else if ((day >= 1 || day <= 30) && month == 11)
    {
        printf("On the date %d/%d/%d, the season is Spring.\n\n", day, month, year);
    }
    else if ((day >= 1 || day <= 20) && month == 12)
    {
        printf("On the date %d/%d/%d, the season is Spring.\n\n", day, month, year);
    }
    else if ((day >= 21 || day <= 31) && month == 12)
    {
        printf("On the date %d/%d/%d, the season is Summer.\n\n", day, month, year);
    }
    else if ((day >= 1 || day <= 31) && month == 1)
    {
        printf("On the date %d/%d/%d, the season is Summer.\n\n", day, month, year);
    }
    else if ((day >= 1 || day <= 28) && month == 2)
    {
        printf("On the date %d/%d/%d, the season is Summer.\n\n", day, month, year);
    }
    else if ((day >= 1 || day <= 20) && month == 3)
    {
        printf("On the date %d/%d/%d, the season is Summer.\n\n", day, month, year);
    }
    else
    {
        printf("Error : Invalid date. Try again");
    }
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Collect Date\n");
    printf("\t 2. Print Season\n");
    printf("\t 3. Exit\n\n");
}

int main()
{
    int option, day = -1, month, year;

    system("cls");
    printf("The C code above contains a function estacao that takes day and month as input and determines the season of the year based on these values. The main code (main) prompts the user to input the day and month, calls the estacao function to determine the corresponding season, and displays the result on the screen. The program also handles invalid dates and provides an error message in such cases.\n\n");
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
            collectDate(&day, &month, &year);
            system("pause");
            break;
        case 2:
            system("cls");
            if (day > 0)
            {
                printSeason(day, month, year);
            }
            else
            {
                printf("\t Collect Date\n\n");

                printf("This option allows the user to input the desired date to determine the corresponding season of the year.\n\n");

                printf("Error: No date has been recorded; please enter a date first to determine the corresponding season.\n\n");
            }
            system("pause");
            break;
        case 3:
            system("cls");
            printf("Leaving the program\n");
            return 0;
        default:
            system("cls");
            printf("Error: Invalid option. Try again\n\n");
            system("pause");
            break;
        }
    }
}