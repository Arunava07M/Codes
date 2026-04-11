#include <iostream>
#include <iomanip>  // For controlling output format
using namespace std;

int main() {
    double num = 3.14159;

    // Control output to 2 decimal places
    cout << fixed << setprecision(2) << num << endl;

    // Control output to 3 decimal places
    cout << fixed << setprecision(3) << num << endl;

    return 0;
}
