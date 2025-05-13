#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("Welcome to the Simple Calculator!\n");
    printf("Choose an operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");

    printf("Enter the number of the operation (1/2/3/4): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4) {
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        switch(choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Error: Cannot divide by zero.\n");
                }
                break;
            default:
                printf("Invalid input.\n");
        }
    } else {
        printf("Invalid choice! Please choose a valid operation.\n");
    }

    return 0;
}
