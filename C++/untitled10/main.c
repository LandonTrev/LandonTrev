#include <stdio.h>
#include <string.h>

// defines a function reverse a string using the two-pointer technique
void reverse(char* str) {

    // pointer for the start of the string
    int first = 0;

    //  sets the last pointer to the index of the last character in the string.
    //  -1 because of null operator after strings in c ex. '\0'.
    int last = strlen(str) - 1;

    // temp variable for swapping characters
    char temp;

    // swaps characters until the first and last pointers meet
    while (first < last) {
        // swaps characters at the first and last indices
        temp = str[first];                  // store character at the first pointer in temp
        str[first] = str[last];             // replace character at the first pointer with character at the last pointer
        str[last] = temp;                   // set the character at the last pointer to the value stored in temp

        // move pointers towards each other
        first++;                            // increments the first pointer to move right
        last--;                             // decrements the last pointer to move left
    }
}

int main() {
    char str[100];   // declares a character array to hold user input

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);     // reads a line of text from user input allows spaces

    // removes the newline character created by fgets
    str[strcspn(str, "\n")] = 0;   // replace the newline character with null terminator

    // calls reverse function
    reverse(str);

    printf("Reversed string is: %s\n", str);
    return 0;
}