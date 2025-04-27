#include <stdio.h>

/*
Q2 - Create a basic calculator that reads two numbers from the user
and displays their sum, difference, product, and quotient...
Landon Trevisani 9/03/2023 Programming 1
 */
//Important to use Double point #'s here so you can display numbers with
//decimal places past 3 points

int main() {
    double value1, value2;

    // First need to ask the user for the 2 number
    printf(" Enter the first value: ");
    scanf("%lf", &value1);

    printf("Enter the second value: ");
    scanf("%lf", &value2);

    //Calculations
    printf("\nResults:\n");
    printf("Sum = %.2lf\n", value1 + value2);
    printf("Difference = %.2lf\n", value1 - value2);
    printf("Product = %.2lf\n", value1 * value2);

    // For division. If else statement when values are divided by 0
    if (value2 != 0)
    {
        printf("Quotient = %.2lf\n", value1 / value2);
    } else {
        printf("Quotient = Division by Zero - Undefined.\n");
    }

    return 0;
}



