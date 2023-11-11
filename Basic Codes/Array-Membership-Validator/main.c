#include <stdio.h>
#include <stdlib.h>

void inputNumbers(int *quantityNumbers, int numbers[])
{
    printf("You selected the first option.\n\n");

    printf("Enter the number of numbers you want to store in the vector: ");
    scanf("%d", quantityNumbers);

    system("cls");
    printf("You selected the first option.\n\n");

    printf("Collecting the Numbers\n\n");

    for (int i = 0; i < *quantityNumbers; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("\n");
}

void numbersValidator(int *belongsVector, int quantityNumbers, int numbers[])
{
    printf("You selected the second option.\n\n");

    printf("Enter a number to find out if it belongs to the vector: ");
    scanf("%d", belongsVector);

    system("cls");
    printf("You selected the second option.\n\n");

    printf("Printing Result\n\n");
    for (int i = 0; i < quantityNumbers; i++)
    {
        if (*belongsVector == numbers[i])
        {
            printf("The number entered belongs to the vector\n\n");
            return;
        }
    }
    printf("The number entered does not belong to the vector\n\n");
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Collecting Numbers\n");
    printf("\t 2. Compare Numbers\n");
    printf("\t 3. Exit\n\n");
}

int main()
{
    int option, belongsVector, quantityNumbers = 0, numbers[quantityNumbers], assistant = 0;

    printf("This C program enables you to input 10 numbers and subsequently checks whether an additional number belongs to the provided array. The pertence_vetor function iterates through the array to determine if the number is present or not. A handy tool for verifying the inclusion of elements in datasets. Try it now!\n\n");
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
            inputNumbers(&quantityNumbers, numbers);
            assistant = 1;
            break;
        case 2:
            system("cls");
            if (assistant != 0)
            {
                numbersValidator(&belongsVector, quantityNumbers, numbers);
            }
            else
            {
                printf("You selected the second option.\n\n");

                printf("Error: cannot compare numbers because vector was not collected. Enter the vector to access this option.\n\n");
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