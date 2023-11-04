#include <stdio.h>
#include <stdlib.h>

static float tax = 1.20;

typedef struct productData
{
    char productName[50];
    char productCode[20];
    float productPrice;

} productData_str;

void collectProductQuantity(int *productQuantity)
{
    printf("\t Collect Product Quantity\n\n");

    printf("This option allows you to specify the number of products you want to store.\n\n");

    printf("Enter the number of products you want to store: ");
    scanf("%d", productQuantity);
    while (*productQuantity < 0)
    {
        printf("\nError: It is not possible to store a negative quantity of products. Please try again.\n\n");

        printf("Enter the number of products you want to store: ");
        scanf("%d", productQuantity);
    }

    printf("\n");
}

void collectProductData(productData_str *productData, int productQuantity)
{
    printf("\t Collect Product Data\n\n");

    printf("This option allows you to record the product information.\n\n");

    for (int i = 0; i < productQuantity; i++)
    {
        printf("\t Product %d\n", i + 1);
        printf("Name: ");
        fflush(stdin);
        fgets(productData[i].productName, sizeof(productData[i].productName), stdin);
        printf("Code: ");
        fflush(stdin);
        fgets(productData[i].productCode, sizeof(productData[i].productCode), stdin);
        printf("Price $ ");
        scanf("%f", &productData[i].productPrice);
        while (productData[i].productPrice < 0)
        {
            printf("\nError: It is not possible for a product to have a negative price. Please try again.\n\n");

            printf("Price $ ");
            scanf("%f", &productData[i].productPrice);
        }
        printf("\n");
    }
}

void printProductData(productData_str *productData, int productQuantity)
{
    printf("\t Print Product Data\n\n");

    printf("This option allows you to print the product data.\n\n");

    for (int i = 0; i < productQuantity; i++)
    {
        printf("\t Product %d\n", i + 1);
        printf("Name: %s", productData[i].productName);
        printf("Code: %s", productData[i].productCode);
        printf("Price $ %.2f\n\n", productData[i].productPrice);
    }
}

void printAverageBeforeAndAfterMarkup(productData_str *productData, int productQuantity)
{
    printf("\t Print Average Before AndAfter Markup\n\n");

    printf("This option prints the average prices of the products before and after the markup.\n\n");

    float sumOfPrices = 0.0;
    for (int i = 0; i < productQuantity; i++)
    {
        sumOfPrices += productData[i].productPrice;
    }
    printf("Printing average without the markup: %.2f\n\n", sumOfPrices / (float)productQuantity);

    printf("Printing average with the markup: %.2f\n\n", (sumOfPrices / (float)productQuantity) * tax);
}

void mainMenu()
{
    printf("\t MAIN MENU\n");
    printf("\t 1. Collect Product Quantity\n");
    printf("\t 2. Collect Product Data\n");
    printf("\t 3. Print Product Data\n");
    printf("\t 4. Print Average Before And After Markup\n");
    printf("\t 5. Exit\n\n");
}

int main()
{
    int option, productQuantity = -1;
    productData_str *productData;

    system("cls");
    printf("The provided code is a C program that allows you to calculate the average prices with and without a 20 percent markup. The program prompts the user for a code and the corresponding price. It then calculates the new price with a 20 percent markup and continues to receive inputs until a negative code is entered. After that, the program calculates and displays the average of the original prices and the prices with markup.\n\n");

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
            collectProductQuantity(&productQuantity);
            system("pause");
            break;
        case 2:
            system("cls");
            if (productQuantity > 0)
            {
                productData = (productData_str *)malloc(productQuantity * sizeof(productData_str));
                collectProductData(productData, productQuantity);
            }
            else
            {
                printf("\t Collect Product Data\n\n");

                printf("This option allows you to record the product information.\n\n");

                printf("Error: Please enter the number of products you wish to register first.\n\n");
            }

            system("pause");
            break;
        case 3:
            system("cls");
            if (productQuantity > 0)
            {
                printProductData(productData, productQuantity);
            }
            else
            {
                printf("\t Print Product Data\n\n");

                printf("This option allows you to print the product data.\n\n");

                printf("Error: No product data was found.\n\n");
            }
            system("pause");
            break;
        case 4:
            system("cls");
            if (productQuantity > 0)
            {
                printAverageBeforeAndAfterMarkup(productData, productQuantity);
            }
            else
            {
                printf("\t Print Average Before AndAfter Markup\n\n");

                printf("This option prints the average prices of the products before and after the markup.\n\n");

                printf("Error: No products were found to calculate the average.\n\n");
            }
            system("pause");
            break;
        case 5:
            system("cls");
            free(productData);
            printf("Leaving the program\n");
            return 0;
        default:
            system("cls");
            printf("Error: Invalid option. Try again\n\n");
            system("pause");
            break;
        }
    }
}