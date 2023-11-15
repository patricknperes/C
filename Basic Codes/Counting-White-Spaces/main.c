#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int textSize = 100;

void getText(char text[])
{
    printf("First option selected.\n\n");

    printf("Enter the text: ");
    fflush(stdin);
    fgets(text, textSize - 1, stdin);
    printf("\n");
}

void countWhiteSpaces(char text[])
{
    printf("Second option selected.\n\n");

    int counter = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
        {
            counter++;
        }
    }
    printf("The entered text has %d white spaces.\n\n", counter);
}

void mainMenu()
{
    printf("\t Main Menu\n");
    printf("\t 1. Enter Text\n");
    printf("\t 2. Print White Spaces\n");
    printf("\t 3. Exit\n\n");
}

int main()
{
    int option, helper = 0;
    char inputText[textSize];

    printf("This C program performs a white space counting operation on a text input provided by the user. Using the countWhiteSpaces function, the code iterates through each character in the text, identifying white spaces and incrementing a counter accordingly. The result of the count is then displayed, offering a straightforward and effective way to determine the quantity of white spaces present in the given text. While the program provides basic functionality, it serves as a useful tool for analyzing patterns within strings.\n\n");
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
            getText(inputText);
            helper = 1;
            system("pause");
            break;
        case 2:
            system("cls");
            if (helper != 0)
            {
                countWhiteSpaces(inputText);
            }
            else
            {
                printf("Option 2 selected\n\n");

                printf("Error: You cannot select this option. Enter the text first and try again.\n\n");
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