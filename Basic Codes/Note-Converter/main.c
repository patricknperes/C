#include <stdio.h>
#include <stdlib.h>

void noteConverter(int numberOfGrades, int *studentsGrades)
{
    system("cls");
    printf("Collecting Student Grades\n\n");

    for (int i = 0; i < numberOfGrades; i++)
    {
        printf("\tStudent %d\n", i + 1);
        printf("Enter the student's grade: ");

        scanf("%d", &studentsGrades[i]);
        if (studentsGrades[i] > 10 || studentsGrades[i] < 0)
        {
            printf("\n***The entered grade is invalid***\n");
            printf("\ttry again\n\n");
            i--;
        }
        printf("\n");
    }
}

void printNoteConverter(int numberOfGrades, int *studentsGrades)
{
    printf("Printing Students' Converted Grade\n\n");

    for (int i = 0; i < numberOfGrades; i++)
    {
        printf("\tStudent %d\n", i + 1);
        switch (studentsGrades[i])
        {
        case 1 ... 2:
            printf("Student %d received a grade of %d, which was converted to a E level performance.\n", i + 1, studentsGrades[i]);
            break;
        case 3 ... 4:
            printf("Student %d received a grade of %d, which was converted to a D level performance.\n", i + 1, studentsGrades[i]);
            break;
        case 5 ... 6:
            printf("Student %d received a grade of %d, which was converted to a C level performance.\n", i + 1, studentsGrades[i]);
            break;
        case 7 ... 8:
            printf("Student %d received a grade of %d, which was converted to a B level performance.\n", i + 1, studentsGrades[i]);
            break;
        case 9 ... 10:
            printf("Student %d received a grade of %d, which was converted to a A level performance.\n", i + 1, studentsGrades[i]);
            break;
        default:
            printf("Student %d received a grade of %d, which was converted to a F level performance.\n", i + 1, studentsGrades[i]);
            break;
        }
        printf("\n");
    }
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Collect Student Grades\n");
    printf("\t 2. Print Converted Grade\n");
    printf("\t 3. Exit\n\n");
}

int main()
{
    int option, numberOfGrades = 0, *studentsGrades = NULL;

    system("cls");
    printf("This C code is a simple program that prompts the user to input a grade and then uses a `switch` control structure to classify that grade into a letter grade system.\n\n");

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
            printf("Collecting Student Grades\n\n");

            printf("Enter the number of students: ");
            scanf("%d", &numberOfGrades);

            studentsGrades = (int *)malloc(numberOfGrades * sizeof(int *));

            noteConverter(numberOfGrades, studentsGrades);
            system("pause");
            break;
        case 2:
            system("cls");
            if (studentsGrades != NULL)
            {
                printNoteConverter(numberOfGrades, studentsGrades);
            }
            else
            {
                printf("No student data available. Please collect data first.\n\n");
            }
            system("pause");
            break;
        case 3:
            if (studentsGrades != NULL)
            {
                free(studentsGrades);
            }
            system("cls");
            printf("Leaving the program\n");
            return 0;
            break;
        default:
            system("cls");
            printf("Invalid Option\n\n");
            system("pause");
            break;
        }
    }
}