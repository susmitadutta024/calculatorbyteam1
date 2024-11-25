#include <stdio.h>

int main() {
    char operator, choice;
    double num1, num2, result;

    do {
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("Enter two number as of your choice ");
        scanf("%lf %lf", &num1, &num2);

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid operator.\n");
        }

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you for using the calculator. Goodbye!\n");
    return 0;
}