#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Prompt user for input
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Switch case to perform the chosen operation
    switch (operator) {
        case '+':
            result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
        break;
        case '-':
            result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
        break;
        case '*':
            result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
        break;
        case '/':
            if (num2 != 0) { // Check for division by zero
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
        break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
