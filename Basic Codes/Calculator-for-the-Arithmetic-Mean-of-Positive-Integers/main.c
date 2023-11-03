#include <stdio.h>
#include <stdlib.h>

void printArithmeticMean(float average)
{
    printf("Print Arithmetic Mean\n\n");
    printf("The average of the numbers is %.2f\n\n", average);
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Calculate Arithmetic Mean\n");
    printf("\t 2. Print Arithmetic Mean\n");
    printf("\t 3. Exit\n\n");
}

int main()
{
    int option, wholeNumbers, counter, i;
    float average;
    ;

    system("cls");
    printf("This C program calculates the arithmetic mean of a list of positive integers entered by the user. The program prompts the user to input positive integers, accumulates these numbers, and when a negative number is entered, it calculates the arithmetic mean of the provided numbers. The resulting mean is displayed with two decimal places. The program is a simple tool for calculating the mean of a series of positive integer values, useful in various situations such as grade calculations, score averages, or other basic statistical analyses.\n\n");

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
            printf("Calculate Arithmetic Mean\n\n");

            printf("When you wish to stop collecting integers, simply enter a value less than zero.\n\n");
            i = 0;
            average = 0.0;
            counter = 0;
            while (1)
            {
                printf("Enter the %d whole number: ", i);
                scanf("%d", &wholeNumbers);
                if (wholeNumbers < 0)
                {
                    printf("\n");
                    break;
                }
                i++;
                counter++;
                average += wholeNumbers;
            }
            average /= (float)counter;
            system("pause");
            break;
        case 2:
            system("cls");
            printArithmeticMean(average);
            system("pause");
            break;
        case 3:
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
