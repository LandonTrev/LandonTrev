#include <iostream>
using namespace std;

int main() {
    int n;
    float number;
    float sum = 0.0;



    // how many #'s ?
    cout << "Enter how many numbers you want to add/average: ";
    cin >> n;

    // loop for number input. Displays enter number based on the value stored in n
    for (int i = 1; i <= n; i++) {
        cout << "Enter the number " << i << ": "<<endl;
        cin >> number;
        sum += number;
    }

     float avg = sum / n; // placed after the sum is updated

    // output for the sum and the average
    cout << "sum: " << sum << endl;
    cout << "Average: " << avg << endl;

    return 0;
}