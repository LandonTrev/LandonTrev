#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Sequence: ";

    for (int i = 1; i <= n; ++i) {
        cout << t1 << " ";  // Print the current term
        nextTerm = t1 + t2; // Calculate the next term
        t1 = t2;            // Update t1 to t2
        t2 = nextTerm;      // Update t2 to nextTerm
    }

    return 0;
}
