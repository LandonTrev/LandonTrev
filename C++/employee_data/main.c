#include <stdio.h>
//define the structure function to hold variables
struct Employee {
    int id;
    char name[50];
    char designation[100];
    char department[100];
    double salary;
    double years_worked;
};
//define main function and define the strcture for 4 employees
int main() {
    struct Employee employees[4];
    //for loop
    for (int i = 0; i < 4; i++) {
        printf("Enter employee details %d:\n" , i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);

        printf("Name: ");
        scanf(" %[^\n]%*c", employees[i].name);
        // %[^\n]: This tells scanf to keep reading input until it encounters a newline
        // %*c: The %*c is used to consume the newline character (\n) that’s left
        // in the input buffer. doesn't store this character, just consume it.
        printf("Designation: ");
        scanf(" %[^\n]%*c", employees[i].designation);

        printf("Department: ");
        scanf(" %[^\n]%*c", employees[i].department);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("Years worked: ");
        scanf("%f", &employees[i].years_worked);

        printf("\n");
    }

    // Display employee details
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 4; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Designation: %s\n", employees[i].designation);
        printf("Department: %s\n", employees[i].department);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}


