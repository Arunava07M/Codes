// Prime Number Check using <cmath> -> Optimized
#include <iostream>
#include <cmath>  // Required for sqrt()
using namespace std;

int main() {
    int n;
    cout << "Enter your Number = ";
    cin >> n;

    int d = 0;  // Flag to indicate if a divisor is found

    if (n <= 1) {
        cout << "The number is neither prime nor composite" << endl;
    } else {
        // Optimization: only check up to sqrt(n)
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                d = 1;
                break;
            }
        }

        if (d == 0) {
            cout << "The number is a prime number" << endl;
        } else {
            cout << "The number is a Composite number" << endl;
        }
    }

    return 0;
}
