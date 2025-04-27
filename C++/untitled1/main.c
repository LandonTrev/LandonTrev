#include <stdio.h>

/*Assignment 1- Question 4. Prints name, UID, Average % of 5 Subjects*/

/* Write a program in C to take input of name, UID and scores obtained
 by a student in 5 subjects and display the name, UID with percentage
 score secured. Draw a flow diagram...
*/

int main() {
    char name[45];
    char uid[15];
    float grade1, grade2, grade3, grade4, grade5;
    float total, percentage;

    //Name and UID. Since there are spaces in names, fgets has to be used...
    printf(" Enter the student's name: ");
    fgets(name, sizeof(name), stdin); //reads name

    printf("Enter the student's UID: ");
    scanf("%s", uid);

    //Enter Grades for Subjects
    printf("\n Enter the grade for Subject 1: ");
    scanf(" %f", &grade1);

    printf("\n Enter the grade for Subject 2: ");
    scanf(" %f", &grade2);

    printf("\n Enter the grade for Subject 3: ");
    scanf(" %f", &grade3);

    printf("\n Enter the grade for Subject 4: ");
    scanf(" %f", &grade4);

    printf("\n Enter the grade for Subject 5: ");
    scanf(" %f", &grade5);

    // Average Percetage
    total = grade1 + grade2 + grade3 + grade4 + grade5;
    percentage = (total / 500.0) * 100;

    //name, UID, and average percentage obtained from input
    printf("\nStudent Name: %s", name);
    printf("UID: %s\n", uid);
    printf("Average Percentage: %.2f%%\n", percentage);

    return 0;
}
