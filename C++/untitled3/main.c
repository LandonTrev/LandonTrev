#include <stdio.h>

int main() {
    double number1, number2, number3;

    //Input for numbers
    printf(" Enter the first number: ");
    scanf("%lf", &number1);

    printf("Enter the second number: ");
    scanf("%lf", &number2);

    printf("Enter the third number: ");
    scanf("%lf", &number3);

    // Logic for determining the largest #
    if (number1 >= number2 && number1 >= number3) {
        printf("The largest number is %.2lf\n", number1);
    } else if (number2 >= number1 && number2 >= number3) {
        printf("The largest number is %.2lf\n", number2);
    } else {
        printf("The largest number is %.2lf\n", number3);
    }

    return 0;
}
