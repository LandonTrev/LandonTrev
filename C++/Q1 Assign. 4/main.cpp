#include <iostream>
using namespace std;

int main() {
    float sum = 0.0;
    float average = 0.0;
    float values[5]; //array of 5 values

    // need input for 5 numbers
    cout << "Enter 5 Floating Point Numbers: ";
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter Number " << i + 1 << ": ";
        cin >> values[i];
        sum += values[i]; //calculate sum of the array of 5 numbers
    }
    //calculate average
    average = sum / 5;

    // output for sum and average
    cout << "The sum of the 5 Floating Point Numbers: " << sum << endl;
    cout << "The average of the 5 Floating Point Numbers: " << average << endl;
    return 0;
}


