#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static float pi = 3.14;

void gatherRadius(float *radius)
{
    printf("\t Gather Radius\n\n");

    printf("This option retrieves the sphere's radius.\n\n");

    printf("Please enter the sphere's radius: ");
    scanf("%f", radius);
    while (*radius < 0)
    {
        printf("\nError: It's not possible to store a negative radius.\n\n");

        printf("Please enter the sphere's radius: ");
        scanf("%f", radius);
    }
    printf("\n");
}

void calculateVolume(float radius)
{
    printf("\t Calculate Volume\n\n");

    printf("This option calculates and prints the volume of the sphere.\n\n");

    float sphereVolume = (4.0 / 3.0) * (pi * pow(radius, 3));
    printf("When the sphere's radius is %.2f, its volume will be %.2f\n\n.", radius, sphereVolume);
}

void mainMenu()
{
    printf("\t 1. Gather Radius\n");
    printf("\t 2. Calculate Volume\n");
    printf("\t 3. Exit\n\n");
}

int main()
{
    int option;
    float radius = -1.0;

    system("cls");
    printf("The following program is an example of sphere volume calculation in the C programming language. It uses the 'volume' function that takes the radius of the sphere as input and returns the calculated volume. The program prompts the user to input the radius of the sphere and displays the result of the calculation with two decimal places.\n\n");

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
            gatherRadius(&radius);
            system("pause");
            break;
        case 2:
            system("cls");
            if (radius > 0)
            {
                calculateVolume(radius);
            }
            else
            {
                printf("\t Calculate Volume\n\n");

                printf("This option calculates and prints the volume of the sphere.\n\n");

                printf("Error: Please enter the sphere's radius first to determine the volume.\n\n");
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