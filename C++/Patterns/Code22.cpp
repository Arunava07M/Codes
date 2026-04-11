//Pattern 21:- when n = 
//      *
//    *   *
//  *       *
//*           *
//  *       *
//    *   *
//      *


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n = ";
    cin >> n;

    // Upper half
    for (int i = 0; i < n; i++) {
        // Leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << "*";

        // Middle spaces (skip for i == 0)
        if (i != 0) {
            for (int k = 0; k < 2 * i - 1; k++) {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    // Lower half
    for (int i = n - 2; i >= 0; i--) {
        // Leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << "*";

        // Middle spaces (skip for i == 0)
        if (i != 0) {
            for (int k = 0; k < 2 * i - 1; k++) {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
