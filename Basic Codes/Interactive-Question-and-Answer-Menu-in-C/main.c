#include <stdio.h>
#include <stdlib.h>

void printQuestions()
{
    printf("QUESTIONS\n\n");

    printf("|a = 3|\n");
    printf("|b = 7|\n");
    printf("|c = 4|\n\n");

    printf("Alternative 01: \n");
    printf(">> (a + c) > b\n\n");

    printf("Alternative 02: \n");
    printf(">> b >= (a + 2)\n\n");

    printf("Alternative 03: \n");
    printf(">> c == (b - a)\n\n");

    printf("Alternative 04: \n");
    printf(">> (b + a) <= c\n\n");

    printf("Alternative 05: \n");
    printf(">> (c + a) <= c\n\n");
}

void printResponses(int a, int b, int c)
{
    printf("Responses\n\n");

    printf("|a = 3|\n");
    printf("|b = 7|\n");
    printf("|c = 4|\n\n");

    printf("|0.False || 1.True|\n\n");

    printf("Alternative 01: \n");
    printf("(a + c) > b : %d\n\n", (a + c) > b);

    printf("Alternative 02: \n");
    printf("b >= (a + 2) : %d\n\n", b >= (a + 2));

    printf("Alternative 03: \n");
    printf("c == (b - a : %d\n\n", c == (b - a));

    printf("Alternative 04: \n");
    printf("(b + a) <= c : %d\n\n", (b + a) <= c);

    printf("(Alternative 05): \n");
    printf("(c + a) <= c) : %d\n\n", (c + a) <= c);
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
    int option, a = 3, b = 7, c = 4;

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
            printResponses(a, b, c);
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
        }
    }
}