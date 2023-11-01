#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static float pi = 3.14;

void areaCalculation(float radius)
{
    printf("\nPi * radius^2 = %.2f\n\n", pi * pow(radius, 2));
}

void perimeterCalculation(float radius)
{
    printf("\n2 * Pi * Radius = %.2f\n\n", 2 * pi * radius);
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1.Area Calculation\n");
    printf("\t 2.Perimeter Calculation\n");
    printf("\t 3.Exit\n\n");
}

int main()
{
    int option;
    float radius = 0.0;

    system("cls");
    printf("This C program is a simple example of calculating the area and perimeter of a circle based on the radius provided by the user.\n\n");

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
            printf("Area Calculation\n\n");
            printf("Enter the radius: ");
            scanf("%f", &radius);
            areaCalculation(radius);
            system("pause");
            break;
        case 2:
            system("cls");
            printf("Perimeter Calculation\n\n");
            printf("Enter the radius: ");
            scanf("%f", &radius);
            perimeterCalculation(radius);
            system("pause");
            break;
        case 3:
            system("cls");
            printf("Leaving the program\n");
            return 0;
        default:
            system("cls");
            printf("Invalid option\n\n");
            system("pause");
            break;
        }
    }
}