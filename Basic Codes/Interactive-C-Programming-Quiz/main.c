#include <stdio.h>
#include <stdlib.h>

void printQuestions()
{
    printf("QUESTIONS\n\n");

    printf("|a = 5|\n");
    printf("|b = 4|\n");
    printf("|c = 3|\n");
    printf("|d = 6|\n\n");

    printf("Alternative 01: \n");
    printf(">> (a > c) && (c <= d)\n\n");

    printf("Alternative 02: \n");
    printf(">> (a + b) > 10 || (a + b) == (c + d)\n\n");

    printf("Alternative 03: \n");
    printf(">> (a >= c)&& (d >= c)\n\n");
}

void printResponses(int a, int b, int c, int d)
{
    printf("Responses\n\n");

    printf("|a = 5|\n");
    printf("|b = 4|\n");
    printf("|c = 3|\n");
    printf("|d = 6|\n\n");

    printf("|0.False || 1.True|\n\n");

    printf("Alternative 01: \n");
    printf("(a > c) && (c <= d) : %d\n\n", (a > c) && (c <= d));

    printf("Alternative 02: \n");
    printf("b >= (a + 2) : %d\n\n", b >= (a + 2));

    printf("Alternative 03: \n");
    printf("c == (b - a) : %d\n\n", c == (b - a));
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Print Questions\n");
    printf("\t 2. Print Responses\n");
    printf("\t 3. Exit\n\n");
}

int main()
{
    int option, a = 5, b = 4, c = 3, d = 6;

    system("cls");
    printf("This C code implements an interactive menu program that presents a set of questions to the user\n");
    printf("and provides corresponding answers based on predefined values for variables a, b, and c.\n");
    printf("The user has the freedom to choose from three options:\n");
    printf("1. View the questions\n");
    printf("2. Display the answers\n");
    printf("3. Exit the program\n");
    printf("The program also includes screen-clearing and pause functionalities to enhance the user experience,\n");
    printf("keeping the interface organized.\n\n");

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
            printQuestions();
            system("pause");
            break;
        case 2:
            system("cls");
            printResponses(a, b, c, d);
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