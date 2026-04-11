#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 5;

    int exp1 = (y * (x / y + x / y));  // 5 * (2 + 2) = 5 * 4 = 20
    int exp2 = (y * x / y + y * x / y); // (50/5 + 50/5) = 10 + 10 = 20

    cout << exp1 << " ";               // Output: 20
    cout << exp2 << "\n";              // Output: 20
    return 0;
}

