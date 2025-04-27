#include <iostream>
using namespace std;

int main() {
    int age;
    //infinite while loop
    while (true) {
        //input for age
        cout << "Enter the age: ";
        cin >> age; //updates variable

        if (age >= 0 && age <= 12) {
            cout << "Classification: Child" << endl;

        } else if (age >= 12 && age <= 19) {
            cout << "Classification: Teenager" << endl;

        } else if (age >= 20 && age <= 64) {
            cout << "Classification: Adult" << endl;

        } else if (age >= 65) {
            cout << "Classification: Senior" << endl;
        }
        else {
            cout << "Age is out of range" << endl;
        }
    }
    return 0; // will not be reached since the while loop is infinite
}







