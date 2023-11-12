#include <stdio.h>
#include <stdlib.h>

static int quantityNumbers = 10;

void collectNumbers(int numbers[])
{
    printf("Option 1 selected\n\n");

    printf("Enter 10 numbers to find out which one is the largest\n\n");
    system("pause");

    system("cls");
    printf("Option one selected\n\n");

    printf("Collecting Numbers\n\n");

    for (int i = 0; i < quantityNumbers; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("\n");
}

void printLargestNumber(int numbers[])
{
    printf("Option 2 selected\n\n");

    printf("Printing the Largest Number\n\n");

    int largestNumber = numbers[0];
    for (int i = 0; i < quantityNumbers; i++)
    {
        if (largestNumber < numbers[i])
        {
            largestNumber = numbers[i];
        }
    }
    printf("The largest number in the array is %d.\n\n", largestNumber);
}

void mainMenu()
{
    printf("\t Main Menu\n");
    printf("\t 1. Enter Array\n");
    printf("\t 2. Print Largest Number\n");
    printf("\t 3. Exit\n\n");
}

int main()
{
    int option, numbers[quantityNumbers], helper = 0;

    printf("This C program prompts the user to enter 10 numbers and then uses a function called 'printLargestNumber' to find and display the largest value in the provided array. The function iterates through the array using a loop and compares each element with the currently considered largest value. If a larger element is found, this value is updated. Finally, the program prints the result, indicating the largest value found in the array entered by the user. This approach provides a simple and efficient way to determine the largest value in a set of numbers.\n\n");
    system("pause");

    while (1)
    {
        system("cls");
        mainMenu();
        printf("Enter the desired option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            system("cls");
            collectNumbers(numbers);
            helper = 1;
            system("pause");
            break;
        case 2:
            system("cls");
            if (helper != 0)
            {
                printLargestNumber(numbers);
            }
            else
            {
                printf("Option 2 selected\n\n");

                printf("Error: Unable to find the largest number as the array has not been collected. Enter the array and try again.\n\n");
            }
            system("pause");
            break;
        case 3:
            system("cls");
            printf("Exiting the program.\n");
            return 0;
        default:
            system("cls");
            printf("Error: Invalid option. Please try again.\n\n");
            system("pause");
            break;
        }
    }
}