#include <stdio.h>
#include <stdlib.h>

static int quantityNumbers = 10;

void collectNumberArray(int *numbers)
{
    printf("First option selected.\n\n");

    printf("Enter an array of 10 positive numbers.\n\n");
    system("pause");

    system("cls");
    printf("First option selected.\n\n");

    printf("Collecting the Array\n\n");

    for (int i = 0; i < quantityNumbers; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        while (numbers[i] < 0)
        {
            printf("Error: Cannot collect a negative number. Try Again.\n\n");

            printf("Enter number %d: ", i + 1);
            scanf("%d", &numbers[i]);
        }
    }
    printf("\n");
}

void printAverage(int *numbers)
{
    printf("Second option selected.\n\n");

    printf("Calculating the Average\n\n");

    float average = 0;
    for (int i = 0; i < quantityNumbers; i++)
    {
        average += numbers[i];
    }

    printf("The average of the numbers in the array is %.2f.\n\n", (float)average / quantityNumbers);
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Collect Array\n");
    printf("\t 2. Print Average\n");
    printf("\t 3. Exit\n\n");
}

int main()
{
    int option, numbers[quantityNumbers], auxiliary = 0;

    system("cls");
    printf("This C program allows users to calculate the average of 10 numbers entered by the user. The 'printAverage' function calculates the average of the values stored in an array. The code uses a loop to collect the 10 numbers entered by the user, stores them in an array, and then calculates and displays the average with a precision of two decimal places. This simple program is useful for quickly calculating the average of a specific set of numbers, serving as a practical tool for basic statistical analysis tasks in C.\n\n");

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
            collectNumberArray(numbers);
            auxiliary = 1;
            system("pause");
            break;
        case 2:
            system("cls");
            if (auxiliary != 0)
            {
                printAverage(numbers);
            }
            else
            {
                printf("Error: Cannot print the average as the array has not been collected. Enter the array first to access this option.\n\n");
            }
            system("pause");
            break;
        case 3:
            system("cls");
            printf("Leaving the program\n");
            return 0;
            break;
        default:
            system("cls");
            printf("Invalid option\n\n");
            system("pause");
            break;
        }
    }
}