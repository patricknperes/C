#include <stdio.h>
#include <stdlib.h>

static float kilowattHour = 0.12;

void billCalculate(float kilowatt)
{
    printf("Electricity Bill Calculator\n\n");

    printf("Kilowatt-hour consumed per month: ");
    scanf("%f", &kilowatt);

    printf("\nTotal Value Without Tax R$ %.2f\n", kilowatt * kilowattHour);
    printf("ICMS R$ %.2f\n", (kilowatt * kilowattHour * 18) / 100);
    printf("Total Value R$ %.2f\n\n", ((kilowatt * kilowattHour * 18) / 100) + (kilowatt * kilowattHour));
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Electricity Bill Calculator\n");
    printf("\t 2. Exit\n\n");
}

int main()
{
    int option;
    float kilowatt = 0.0;

    system("cls");
    printf("Description:\n");
    printf("The 'Electricity Bill Calculator' program is a simple C application that allows users to calculate the cost of their electricity bill based on the consumption of kilowatt-hours.\n\n");

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
            billCalculate(kilowatt);
            system("pause");
            break;
        case 2:
            system("cls");
            printf("Leaving the program\n");
            return 0;
        default:
            system("cls");
            printf("Invalid option\n\n");
            system("pause");
        }
    }
}