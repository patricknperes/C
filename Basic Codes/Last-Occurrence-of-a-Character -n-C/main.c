#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int textSize = 100;

void collectText(char text[])
{
    printf("First option selected.\n\n");

    printf("Enter the text: ");

    fflush(stdin);
    fgets(text, textSize - 1, stdin);
    printf("\n");
}

void findLastPosition(char text[])
{
    char character;
    printf("Second option selected\n\n");

    printf("Enter the character to find its last occurrence: ");
    fflush(stdin);
    scanf("%c", &character);
    printf("\n");
    system("pause");

    system("cls");
    printf("Second option selected\n\n");

    int position;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == character)
        {
            position = i + 1;
        }
    }
    printf("The character %c appears last in the text at position %d\n\n", character, position);
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Collect Text\n");
    printf("\t 2. Print Last Position of a Character\n");
    printf("\t 3. Exit\n\n");
}

int main()
{
    int option, flag = 0;
    char text[textSize];

    system("cls");
    printf("This C program, titled 'Finding the Last Occurrence of a Character,' allows users to input a text of up to 100 characters and specify a character of interest. The program then searches for the last position where the provided character occurs in the text and displays the result. The findLastPosition function iterates through the text and records the position of the last occurrence of the desired character, if present. This provides a simple and effective tool to determine the position of the last instance of a specific character in a text sequence.\n\n");
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
            collectText(text);
            flag = 1;
            system("pause");
            break;
        case 2:
            system("cls");
            if (flag == 1)
            {
                findLastPosition(text);
            }
            else
            {
                printf("Second option selected\n\n");

                printf("Error: Enter the text first to find the last position of the desired character. Try again.\n\n");
            }

            system("pause");
            break;
        case 3:
            system("cls");
            printf("Exiting the program\n");
            return 0;
        default:
            system("cls");
            printf("Invalid option\n\n");
            system("pause");
        }
    }
}