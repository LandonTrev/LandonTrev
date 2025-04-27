// ReSharper disable once CppUnusedIncludeDirective
#include <stdio.h>
/*
Assignment 1 Q1: Write a C program that scans and prints different data
types such as an integer, a float, a double, a character, and a string...
*/
//defines variables and specifies what type of data each can hold
int main()

{
    int aInt;
    float aFloat;
    double aDouble;
    char aChar;
    char aString[50];

    //Ask for Integer, Float, Etc. and Scan input
    printf(" Enter an Integer: ");
    scanf("%d", &aInt);

    printf("Enter a Floating Point Number: ");
    scanf("%f", &aFloat);

    printf("Enter a Double Point Number: ");
    scanf("%lf", &aDouble);

    printf("Enter a Character: ");
    scanf(" %c", &aChar);

    printf("Enter a String: ");
    scanf("%s", aString);

    //print the values back

    printf("\nYou Entered:  \n");
    printf("Integer: %d\n", aInt);
    printf("Floating point: %.2f\n", aFloat);
    printf("Double point: %.2lf\n", aDouble);
    printf("Character: %c\n", aChar);
    printf("String: %s\n", aString); //need to add fgets function to include spaces

    return 0;
}






