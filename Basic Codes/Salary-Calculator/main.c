#include <stdio.h>
#include <stdlib.h>

static float minimumSalary = 1320.00;
static float normalHour = 5.50;
static float extraHour = 11.00;

void calculateSalary(int hoursWorked)
{
    printf("Salary Calculator for Overtime Hours\n\n");

    printf("Enter the hours worked in the month: ");
    scanf("%d", &hoursWorked);

    system("cls");
    printf("Salary Calculator for Overtime Hours\n\n");
    if (hoursWorked < 220)
    {
        printf("With %d hours worked per month, your salary is $%.2f\n\n", hoursWorked, hoursWorked * normalHour);
    }
    else if (hoursWorked == 220)
    {
        printf("With 220 hours worked per month, your salary is $1320.00\n\n");
    }
    else
    {
        printf("With %d hours worked per month, your salary is $%.2f\n\n", hoursWorked + (hoursWorked - 220), minimumSalary + ((hoursWorked - 220) * extraHour));
    }
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Salary Calculator for Overtime Hours\n");
    printf("\t 2. Exit\n\n");
}

int main()
{
    int option, hoursWorked = 0;

    system("cls");
    printf("This C program calculates an employee's salary based on their hours worked. If the hours are less than 220, it pays $5.50 per hour. For overtime (more than 220 hours), it pays $11.00 per extra hour, with a base salary of $1320.00.\n\n");
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
            calculateSalary(hoursWorked);
            system("pause");
            break;
        case 2:
            system("cls");
            printf("Leaving the program\n");
            return 0;
        default:
            system("cls");
            printf("Invalid oprion\n\n");
            system("pause");
            break;
        }
    }
}