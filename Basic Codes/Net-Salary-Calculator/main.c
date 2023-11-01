#include <stdio.h>
#include <stdlib.h>

static float hourlyPrice = 5.50;

void userData(float grossSalary, int regularHours, int overtime)
{
    printf("User Data\n\n");

    printf("Please enter your gross salary R$ ");
    scanf("%f", &grossSalary);

    printf("Enter regular work hours: ");
    scanf("%d", &regularHours);

    printf("Enter overtime hours worked: ");
    scanf("%d", &overtime);
    printf("\n");

    system("cls");
    printf("Print Salary\n\n");

    printf("Gross Salary R$ %.2f\n", grossSalary);
    printf("Regular Hours: %d\n", regularHours);
    printf("Overtime Hours: %d\n\n", overtime);

    float netSlaray = (grossSalary + (hourlyPrice*overtime));
    float inss = (netSlaray * 8) / 100;
    printf("Net Salary: %.2f\n", netSlaray);
    printf("INSS: %.2f\n", inss);
    printf("Total Net Salary: %.2f\n\n", netSlaray - inss);
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. User Data\n");
    printf("\t 2. Exit\n\n");
}

int main()
{
    int option;
    float grossSalary = 0; 
    int regularHours = 0, overtime = 0;

    system("cls");
    printf("Description: A straightforward C application enabling employees to compute their net salary by inputting their gross salary, regular work hours, and overtime hours, offering essential financial insights.\n\n");

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
            userData(grossSalary, regularHours, overtime);
            system("pause");
            break;
        case 2:
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