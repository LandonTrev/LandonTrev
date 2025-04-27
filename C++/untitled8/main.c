#include <stdio.h>

// Function to convert percentage to GPA
float convertPercentageToGPA(float percentage) {
    if (percentage >= 90) return 4.0;
    if (percentage >= 80) return 3.0;
    if (percentage >= 70) return 2.0;
    if (percentage >= 60) return 1.0;
    return 0.0;
}

int main() {
    int i = 1;
    float percentage, GPA, totalGPA = 0.0;

    printf("Enter your grades for 5 courses:\n");

    // Use a while loop to input percentage grades for 5 courses
    while (i <= 5) {
        printf("Course %d - Enter percentage grade (0 to 100): ", i);

        while (1) {
            // Read the percentage value
            if (scanf("%f", &percentage) != 1) {
                // Handle invalid input
                printf("\nInvalid input. Please enter a numeric value between 0 and 100: ");
                while (getchar() != '\n'); // Clear the input buffer
            } else if (percentage < 0 || percentage > 100) {
                // Handle out-of-range input
                printf("Invalid percentage! Enter a value between 0 and 100: ");
            } else {
                // Valid input
                break;
            }
        }

        // Convert percentage to GPA
        GPA = convertPercentageToGPA(percentage);

        // Accumulate total GPA
        totalGPA += GPA;

        // Increment counter
        i++;
    }

    // Calculate average GPA
    float averageGPA = totalGPA / 5;

    // Output average GPA of the 5 courses
    printf("\nYour average GPA is: %.2f\n", averageGPA);

    return 0;
    {
        // Convert percentage to GPA
        GPA = convertPercentageToGPA(percentage);

        // Accumulate total GPA
        totalGPA += GPA;

        // Increment counter
        i++;

    } while (i < 5); // Loop until 5 courses are processed

    // Calculate average GPA
    averageGPA = totalGPA / 5;

    // Output average GPA of the 5 courses
    printf("\nYour average GPA is: %.2f\n", averageGPA);

    return 0;
}