#include <stdlib.h>
#include <stdio.h>

static int academicFouls = 15;
static int academicTests = 2;
static int academicWork = 1;

typedef struct studentData
{
    char name[100];
    char registration[20];
    float assessments[2];
    float evaluationWork[1];
    int absences;
} studentData_est;

void collectsStudentData(int numberOfStudents, studentData_est *studentData)
{
    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("\t Student %d\n", i + 1);
        printf("Student's name: ");
        fflush(stdin);
        fgets(studentData[i].name, sizeof(studentData[i].name), stdin);
        printf("Registration: ");
        fflush(stdin);
        fgets(studentData[i].registration, sizeof(studentData[i].registration), stdin);

        printf("Enter the number of absences: ");
        scanf("%d", &studentData[i].absences);
        if (studentData[i].absences > academicFouls)
        {
            printf("\nThe student's attendance falls short of the required threshold for passing the subject, resulting in a failing grade.\n\n");
        }
        else
        {
            for (int j = 0; j < academicTests; j++)
            {
                printf("Test %d, worth 35 percent of the period :", j + 1);
                scanf("%f", &studentData[i].assessments[j]);
                if (studentData[i].assessments[j] > 35 || studentData[i].assessments[j] < 0)
                {
                    printf("\n***The entered grade is invalid***\n");
                    printf("\ttry again\n\n");
                    j--;
                }
            }

            for (int k = 0; k < academicWork; k++)
            {
                printf("The Evaluation Work accounts for 30 percent of the grading for the period: ");
                scanf("%f", &studentData[i].evaluationWork[k]);
                if (studentData[i].evaluationWork[k] > 30 || studentData[i].evaluationWork[k] < 0)
                {
                    printf("\n***The entered grade is invalid***\n");
                    printf("\ttry again\n\n");
                    k--;
                }
            }

            printf("\n");
        }
    }
}

void printStudentData(int numberOfStudents, studentData_est *studentData)
{
    printf("Printing Student Data\n\n");
    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("\t Student %d\n", i + 1);
        printf("Student's name: %s", studentData[i].name);
        printf("Registration: %s", studentData[i].registration);

        printf("Absences: %d\n", studentData[i].absences);
        if (studentData[i].absences > 15)
        {
            printf("\nStatus: FAILED DUE TO LACK\n\n");
        }
        else
        {
            float testNotes = 0;
            for (int j = 0; j < academicTests; j++)
            {
                printf("Test %d: %.2f\n", j + 1, studentData[i].assessments[j]);
                testNotes += studentData[i].assessments[j];
            }

            float workNotes = 0;
            for (int k = 0; k < academicWork; k++)
            {
                printf("Evaluation Work: %.2f\n\n", studentData[i].evaluationWork[k]);
                workNotes += studentData[i].evaluationWork[k];
            }

            printf("Total Grade: %.2f\n", testNotes + workNotes);

            if ((testNotes + workNotes) >= 60)
            {
                printf("Status: APROVED\n\n");
            }
            else
            {
                printf("Status: FAIL\n\n");
            }
        }
    }
}

void MainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Collect Data From Students\n");
    printf("\t 2. Print Student Data\n");
    printf("\t 3. Exit\n\n");
}

int main()
{
    int option, numberOfStudents = 0;
    studentData_est *studentData = NULL;

    system("cls");
    printf("This C program, evaluates a student's performance based on their exam scores, class attendance, and a class project. It calculates the weighted average of the scores and determines whether the student is 'APROVADO' (passed) or 'REPROVADO' (failed) based on a predefined set of criteria, including a maximum allowed number of absences.\n\n");

    system("pause");
    while (1)
    {
        system("cls");
        MainMenu();
        printf("Cloose an option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            system("cls");
            printf("Collecting Student Data\n\n");
            printf("Enter the number of students: ");
            scanf("%d", &numberOfStudents);

            studentData = (studentData_est *)malloc(numberOfStudents * sizeof(studentData_est));

            system("cls");
            printf("Collecting Student Data\n\n");
            collectsStudentData(numberOfStudents, studentData);
            system("pause");
            break;
        case 2:
            system("cls");
            if (studentData != NULL)
            {
                printStudentData(numberOfStudents, studentData);
            }
            else
            {
                printf("No student data available. Please collect data first.\n\n");
            }
            system("pause");
            break;
        case 3:
            system("cls");
            if (studentData != NULL)
            {
                free(studentData);
            }
            printf("Leaving the program\n");
            return 0;

        default:
            system("cls");
            printf("Invalid Option\n\n");
            system("pause");
            break;
        }
    }
}