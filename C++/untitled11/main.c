#include <stdio.h>

int main() {

    char operator; //variable to store (+, -, *, /)
    double num1, num2, result;
    int c;

    //Ask user for the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Clear the input buffer after scanning the operator
    while ((c = getchar()) != '\n' && c != EOF);

    // asks user for input to store in the num1 num2 variables
    printf("Enter the two numbers you are wanting to calculate with a space: ");
    scanf("%lf %lf", &num1, &num2);

    // Clear the input buffer after scanning the numbers
    while ((c = getchar()) != '\n' && c != EOF);

    // switch-case to calculate num1 num2 based on the operator
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
            // if else statement to check for division by 0
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
                } else {
                    printf("Anything divided by 0 is undefined.\n");
                }
        break;
        // in case (+, -, *, /) isn't one of the operators entered
        default:
            printf("Invalid operator, Must be one of the following (+, -, *, /).\n");
        break;
    }

    return 0;
}