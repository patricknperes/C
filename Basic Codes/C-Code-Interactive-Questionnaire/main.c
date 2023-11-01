#include <stdio.h>
#include <stdlib.h>

void printQuestions()
{
    printf("QUESTIONS\n\n");

    printf("|a = 3|\n");
    printf("|b = 5|\n");
    printf("|c = 8|\n");
    printf("|d = 7|\n");
    printf("|e = 1|\n\n");

    printf("Alternative 01: \n");
    printf(">> !( e > 3)\n\n");

    printf("Alternative 02: \n");
    printf(">> (e < 1) && (!(b > d))\n\n");

    printf("Alternative 03: \n");
    printf(">> !( d < 0) && (c > 5)\n\n");

    printf("Alternative 04: \n");
    printf(">> !( (e > 3) || (c < 7) )\n\n");

    printf("Alternative 05: \n");
    printf(">> (a > b) || (c > b)\n\n");

    printf("Alternative 06: \n");
    printf(">> e >= 2\n\n");

    printf("Alternative 07: \n");
    printf(">> (e < 1) && (b >= d)\n\n");

    printf("Alternative 08: \n");
    printf(">> (d < 0) || (c > 5)\n\n");

    printf("Alternative 09: \n");
    printf(">> ( d > 3) || !( b < 7)\n\n");
}

void printResponses(int a, int b, int c, int d, int e)
{
    printf("Responses\n\n");

    printf("|a = 3|\n");
    printf("|b = 5|\n");
    printf("|c = 8|\n");
    printf("|d = 7|\n");
    printf("|e = 1|\n\n");

    printf("|0.False || 1.True|\n\n");

    printf("Alternative 01: \n");
    printf("!( x > 3) : %d\n\n", !(e > 3));

    printf("Alternative 02: \n");
    printf("(e < 1) && (!(b > d)) : %d\n\n", (e < 1) && (!(b > d)));

    printf("Alternative 03: \n");
    printf("!( d < 0) && (c > 5) : %d\n\n", !(d < 0) && (c > 5));

    printf("Alternative 04: \n");
    printf("!( (e > 3) || (c < 7) ) : %d\n\n", !((e > 3) || (c < 7)));

    printf("Alternative 05: \n");
    printf("(a > b) || (c > b) : %d\n\n", (a > b) || (c > b));

    printf("Alternative 06: \n");
    printf("e >= 2 : %d\n\n", e >= 2);

    printf("Alternative 07: \n");
    printf("(e < 1) && (b >= d) : %d\n\n", (e < 1) && (b >= d));

    printf("Alternative 08: \n");
    printf("(d < 0) || (c > 5) : %d\n\n", (d < 0) || (c > 5));

    printf("Alternative 09: \n");
    printf("( d > 3) || !( b < 7) : %d\n\n", (d > 3) || !(b < 7));
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
    int option, a = 3, b = 5, c = 8, d = 7, e = 1;

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
            printResponses(a, b, c, d, e);
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