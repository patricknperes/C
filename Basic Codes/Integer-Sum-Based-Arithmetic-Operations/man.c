#include <stdio.h>
#include <stdlib.h>

int calculateSum(int firstNumber, int secondNumber)
{
    return firstNumber + secondNumber;
}

float calculateAverage(int firstNumber, int secondNumber)
{
    float average = ((float)firstNumber + (float)secondNumber) / 2.0;
    return average;
}

int calculateProduct(int firstNumber, int secondNumber)
{
    return firstNumber * secondNumber;
}

float calculateDivision(int firstNumber, int secondNumber)
{
    float division = 0;
    int higherNumber, smallestNumber;

    if (firstNumber < secondNumber)
    {
        higherNumber = secondNumber;
        smallestNumber = firstNumber;
    }
    else
    {
        higherNumber = firstNumber;
        smallestNumber = secondNumber;
    }

    if (smallestNumber != 0)
    {
        division = higherNumber / (float)smallestNumber;
        return division;
    }
    else
    {
        return -1;
    }
}

void logic(int firstNumber, int secondNumber)
{
    int sum = calculateSum(firstNumber, secondNumber);

    printf("PRINTING THE RESULT OF THE OPERATION\n\n");
    switch (sum)
    {
    case 2 ... 7:
        printf("In the range from 2 to 7, the program calculates and displays the average of the two numbers.\n\n");
        printf("The average of %d and %d is %.2f\n\n", firstNumber, secondNumber, calculateAverage(firstNumber, secondNumber));
        break;
    case 8:
        printf("Since the sum is equal to 8, the program calculates and displays the product of the two numbers.\n\n");
        printf("The product of %d and %d is %d\n\n", firstNumber, secondNumber, calculateProduct(firstNumber, secondNumber));
        break;
    case 9 ... 20:
        printf("In the range from 9 to 20, the program checks which of the numbers is greater and performs the division of the larger number by the smaller one, displaying the result.\n\n");
        if (calculateDivision(firstNumber, secondNumber) >= 0)
        {
            printf("The division of the larger by the smaller is %.2f\n\n", calculateDivision(firstNumber, secondNumber));
        }
        else
        {
            printf("This operation cannot be performed as division by zero is not a valid mathematical operation.\n\n");
        }
        break;
    default:
        printf("As the sum does not fit into any of these intervals:\n");
        printf("INVALID RESULT\n\n");
        break;
    }
}

void printRules()
{
    printf("PROGRAM RULES\n\n");

    printf("This C program prompts the user to input two integer numbers, calculates their sum, and based on the sum, performs one of the following three operations:\n\n");
    printf("If the sum is in the range of 2 to 7, the program calculates and displays the average of the two numbers.\n\n");
    printf("If the sum is equal to 8, the program calculates and displays the product of the two numbers.\n\n");
    printf("If the sum is in the range of 9 to 20, the program checks which of the two numbers is greater and performs the division of the greater number by the smaller one, displaying the result.\n\n");
    printf("If the sum doesn't fall into any of these intervals, the program will report 'INVALID RESULT'.\n\n");
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Enter The Numbers\n");
    printf("\t 2. Print The Result\n");
    printf("\t 3. Print Rules \n");
    printf("\t 4. Exit\n\n");
}

int main()
{
    int option, firstNumber = -1, secondNumber;

    system("cls");
    printf("This C program calculates and performs operations (average, product, or division) on two input integers, based on their sum. It handles various scenarios and provides results or an 'INVALID RESULT' message\n\n");

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
            printf("COLLECTING THE NUMBERS\n\n");

            printf("Enter the first number: ");
            scanf("%d", &firstNumber);
            while (firstNumber < 0)
            {
                printf("\n***The entered number is invalid***\n");
                printf("\ttry again\n\n");

                printf("Enter the first number: ");
                scanf("%d", &firstNumber);
            }

            printf("Enter the second number: ");
            scanf("%d", &secondNumber);
            while (secondNumber < 0)
            {
                printf("\n***The entered number is invalid***\n");
                printf("\ttry again\n\n");

                printf("Enter the second number: ");
                scanf("%d", &secondNumber);
            }
            printf("\n");
            system("pause");
            break;
        case 2:
            system("cls");
            if (firstNumber >= 0)
            {
                logic(firstNumber, secondNumber);
            }
            else
            {
                printf("PRINTING THE RESULT OF THE OPERATION\n\n");
                printf("The data has not been collected yet. Please enter the data first and then view the results.\n\n");
            }
            system("pause");
            break;
        case 3:
            system("cls");
            printRules();
            system("pause");
            break;
        case 4:
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
