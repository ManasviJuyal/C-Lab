#include <stdio.h>
enum MenuChoice { ADD = 1,SUBTRACT,MULTIPLY,DIVIDE,EXIT};
int main() 
{
    int choice;
    float num1, num2;
    do {
        printf("\nCALCULATOR MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        enum MenuChoice menu = choice;
        if (menu == EXIT) 
        {
            printf("Exiting Calculator...\n");
            break;
        }
        if (choice < ADD || choice > EXIT)
         {
            printf("Invalid choice!\n");
            continue;
        }
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        switch (menu) 
        {
            case ADD:
                printf("Result = %.2f\n", num1 + num2);
                break;
            case SUBTRACT:
                printf("Result = %.2f\n", num1 - num2);
                break;
            case MULTIPLY:
                printf("Result = %.2f\n", num1 * num2);
                break;
            case DIVIDE:
                if (num2 == 0) 
                    printf("Error: Division by zero!\n");
                 else 
                    printf("Result = %.2f\n", num1 / num2);
                break;
        }
    } while (1);
    return 0;
}