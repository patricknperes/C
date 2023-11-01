#include <stdio.h>
#include <stdlib.h>

typedef struct studentData
{
    char name[100];
    char registration[20];
    float note;
} studentData_str;

void collectsData(int numberOfStudents, studentData_str *studentData)
{
    system("cls");
    printf("\tCollects Student Data\n\n");
    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("\tStudent %d\n", i + 1);
        printf("Name of the student: ");
        fflush(stdin);
        fgets(studentData[i].name, sizeof(studentData[i].name), stdin);
        printf("Registration: ");
        fflush(stdin);
        fgets(studentData[i].registration, sizeof(studentData[i].registration), stdin);
        printf("Note of the student: ");
        scanf("%f", &studentData[i].note);
        printf("\n");
    }
}

void printData(int numberOfStudents, studentData_str *studentData)
{
    printf("Prints Student Data\n\n");

    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("\tStusent %d\n", i + 1);
        printf("Name of the student: %s", studentData[i].name);
        printf("Registration: %s", studentData[i].registration);
        printf("Note of the student: %.2f\n", studentData[i].note);
        if (studentData[i].note >= 60 && studentData[i].note <= 100)
        {
            printf("Situation: APPROVED\n");
        }
        else if (studentData[i].note < 60 && studentData[i].note >= 0)
        {
            printf("Situation: DISAPPROVED\n");
        }
        else
        {
            printf("Situation: INVALID NOTE\n");
        }
        printf("\n");
    }
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Collects Student Data\n");
    printf("\t 2. Print Student Data\n");
    printf("\t 3. Exit\n\n");
}

int main()
{
    int option, numberOfStudents = 0;

    system("cls");
    printf("This C program allows you to input a grade and then evaluates it. If the grade falls between 60 and 100, it will display 'PASSED.' If the grade is less than 60 but not negative, it will show 'FAILED.' Any other input will result in 'INVALID GRADE'.\n\n");

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

            printf("Collects Student Data\n\n");

            printf("Enter the number of students: ");
            scanf("%d", &numberOfStudents);

            studentData_str *studentData = (studentData_str *)malloc(numberOfStudents * sizeof(studentData_str));

            collectsData(numberOfStudents, studentData);
            system("pause");
            break;
        case 2:
            system("cls");
            if (studentData != NULL)
            {
                printData(numberOfStudents, studentData);
            }
            else
            {
                printf("No student data available. Please collect data first.\n\n");
            }
            system("pause");
            break;
        case 3:
            if (studentData != NULL)
            {
                free(studentData);
            }

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