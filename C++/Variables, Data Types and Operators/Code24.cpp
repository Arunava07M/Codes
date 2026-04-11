#include <iostream>
using namespace std;

int main() {
    int x = 200, y = 50, z = 100;

    if (x > y && y > z) {
        cout << "Hello\n";     // Not printed: y (50) is not > z (100)
    }

    if (z > y && z < x) {
        cout << "C++\n";       // True: 100 > 50 and 100 < 200
    }

    if ((y + 200) < x && (y + 150) < z) {
        // (250 < 200 && 200 < 100): False
        cout << "HelloC++\n";  // Not printed
    }

    return 0;
}
