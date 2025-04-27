#include <iostream>
using namespace std;
int main () {
    double values[5] = {1,2,6,36};
    double sum = 0.0;
    for( int i=0; i<5; i++) {
        sum = sum + values[i];
    }
    cout << sum << endl

    return 0;
}
