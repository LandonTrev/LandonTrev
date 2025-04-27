#include <iostream>
using namespace std;

int main() {
    int light_color;

    while (true) {
        // asks user for input
        cout << "Enter the traffic light color (1: Red, 2: Yellow, 3: Green, 0: Exit): ";
        cin >> light_color;

        // switch inside the loop to make it infinite
        switch (light_color) {
            case 1:
                cout << "Stop!" << endl;
            break;  // terminates the case

            case 2:
                cout << "Prepare to stop!" << endl;
            break;

            case 3:
                cout << "Go!" << endl;
            break;

            case 0:
                cout << "Exiting the program." << endl;
            return 0;  // ends loop and exits the program

            default:
                cout << "Invalid input! Please enter a number between 1 and 3." << endl;
            break;
        }
    }

 //return 0; it will already return 0 if 0 is used as input (line 28)
}
