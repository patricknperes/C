#include <stdio.h>
#include <stdlib.h>

static int numberOfNumbers = 10;

void collectNumbers(int *numbers)
{
    printf("First option selected.\n\n");

    printf("Enter 10 integer numbers.\n\n");
    system("pause");

    system("cls");
    printf("Collecting Numbers\n\n");

    for (int i = 0; i < numberOfNumbers; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        while (numbers[i] < 0)
        {
            printf("Error: Cannot store a negative number. Please try again.\n\n");

            printf("Enter number %d: ", i + 1);
            scanf("%d", &numbers[i]);
        }
    }
    printf("\n");
}

void printMean(int *numbers)
{
    printf("Second option selected\n\n");

    printf("Printing Mean\n\n");

    float mean = 0;
    for (int i = 0; i < numberOfNumbers; i++)
    {
        mean += numbers[i];
    }
    printf("Arithmetic Mean: %.2f\n\n", (float)mean / (float)numberOfNumbers);
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Collect Integer Array\n");
    printf("\t 2. Print Mean\n");
    printf("\t 3. Exit\n\n");
}

int main()
{
    int option, numbers[numberOfNumbers], auxiliary = 0;

    printf("This C program prompts the user to input 10 numbers and calculates the arithmetic mean of these values. The collectNumbers function iterates through the array of numbers, accumulates the values, and then computes the average, using type conversion to a floating-point number to ensure precision. The code illustrates a straightforward example of array manipulation and function usage in C, providing a practical application by calculating and displaying the average of the numbers entered by the user.\n\n");
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
            auxiliary = 1;
            system("pause");
            break;
        case 2:
            system("cls");
            if (auxiliary != 0)
            {
                printMean(numbers);
            }
            else
            {
                printf("Second option selected\n\n");

                printf("Error: Enter an array to visualize the arithmetic mean, please try again.\n\n");
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