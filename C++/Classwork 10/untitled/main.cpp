#include <iostream>
using namespace std;

int main() {
    int n, num = 1;

    cout << "Enter the number of rows: ";
    cin >> n;
//increments row starting at 1 and less than or equal to number of rows
    for (int i = 1; i <= n; i++) {
 //i = amount of numbers in each row.
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}
