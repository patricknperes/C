#include <stdio.h>
#include <stdlib.h>

void collectIntervals(int *firstNumber, int *secondNumber)
{
    printf("\t Collect Intervals\n\n");

    printf("Enter the range to discover the numbers within it.\n\n");

    printf("Enter the first number: ");
    scanf("%d", firstNumber);
    while (*firstNumber < 0)
    {
        printf("\nError: Please enter a non-negative number. Try again.\n\n");

        printf("Enter the first number: ");
        scanf("%d", firstNumber);
    }

    printf("Enter the second number: ");
    scanf("%d", secondNumber);
    while (*secondNumber < 0)
    {
        printf("\nError: Please enter a non-negative number. Try again.\n\n");

        printf("Enter the second number: ");
        scanf("%d", secondNumber);
    }
    printf("\n");
}

void countUp(int firstNumber, int secondNumber)
{
    printf("\t Count Up\n\n");

    printf("This option prints the range in ascending order.\n\n");

    printf("Printing the result\n");
    if (firstNumber == secondNumber)
    {
        printf("The range spans from %d to %d, encompassing: %d", firstNumber, secondNumber, firstNumber);
    }
    else if (firstNumber > secondNumber)
    {
        printf("The range spans from %d to %d, encompassing: ", secondNumber, firstNumber);
        for (int i = secondNumber; i <= firstNumber; i++)
        {
            printf("%d", i);
            if (i < firstNumber)
            {
                printf(" - ");
            }
        }
    }
    else if (firstNumber < secondNumber)
    {
        printf("The range spans from %d to %d, encompassing: ", firstNumber, secondNumber);
        for (int i = firstNumber; i <= secondNumber; i++)
        {
            printf("%d", i);
            if (i < secondNumber)
            {
                printf(" - ");
            }
        }
    }
    else
    {
        printf("Error: INVALID RESULT");
    }
    printf("\n\n");
}

void countDown(int firstNumber, int secondNumber)
{
    printf("\t Count Down\n\n");

    printf("This option prints the range in descending order.\n\n");

    printf("Printing the result\n");
    if (firstNumber == secondNumber)
    {
        printf("The range spans from %d to %d, encompassing: %d", firstNumber, secondNumber, firstNumber);
    }
    else if (firstNumber > secondNumber)
    {
        printf("The range spans from %d to %d, encompassing: ", firstNumber, secondNumber);
        for (int i = firstNumber; i >= secondNumber; i--)
        {
            printf("%d", i);
            if (i > secondNumber)
            {
                printf(" - ");
            }
        }
    }
    else if (firstNumber < secondNumber)
    {
        printf("The range spans from %d to %d, encompassing: ", secondNumber, firstNumber);
        for (int i = secondNumber; i >= firstNumber; i--)
        {
            printf("%d", i);
            if (i > firstNumber)
            {
                printf(" - ");
            }
        }
    }
    else
    {
        printf("Error: INVALID RESULT");
    }
    printf("\n\n");
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Collect Intervals\n");
    printf("\t 2. Count Up\n");
    printf("\t 3. Count Down\n");
    printf("\t 4. Exit\n\n");
}

int main()
{
    int option, firstNumber = -1, secondNumber;

    system("cls");
    printf("This C program prompts the user to enter two numbers and then performs two countdowns, one starting from the first number to the second, and another starting from the second number to the first. \n\n");
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
            collectIntervals(&firstNumber, &secondNumber);
            system("pause");
            break;
        case 2:
            system("cls");
            if (firstNumber > 0)
            {
                countUp(firstNumber, secondNumber);
            }
            else
            {
                printf("Error: The interval has not been collected yet; please input it first to determine the appropriate range.\n\n");
            }
            system("pause");
            break;
        case 3:
            system("cls");
            if (firstNumber > 0)
            {
                countDown(firstNumber, secondNumber);
            }
            else
            {
                printf("Error: The interval has not been collected yet; please input it first to determine the appropriate range.\n\n");
            }
            system("pause");
            break;
        case 4:
            system("cls");
            printf("Leaving the program\n");
            return 0;
            break;
        default:
            system("cls");
            printf("Error: Invalid option. Try again.\n\n");
            system("pause");
            break;
        }
    }
}
