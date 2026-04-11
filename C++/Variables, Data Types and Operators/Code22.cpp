#include <iostream>
using namespace std;

int main() {
    int x = 2, y = 5;
    int exp1 = (x * y / x);      // (2*5)/2 = 10/2 = 5
    int exp2 = (x * (y / x));    // 2*(5/2) = 2*2 = 4

    cout << exp1 << ",";         // Output: 5,
    cout << exp2 << "\n";        // Output: 4
    return 0;
}
