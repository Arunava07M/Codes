//Missing number(Good Question)
#include <iostream>
using namespace std;

int main() {
    long long int x;
    cin >> x;

    long long int expectedsum = (x * (x + 1)) / 2;
    long long int actualsum = 0;
    long long int temp;

    for (long long int i = 0; i < x - 1; i++) {
        cin >> temp;
        actualsum += temp;
    }

    cout << expectedsum - actualsum << endl;
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     long long int x;
//     cin >> x;

//     // Create a boolean vector of size x+1 initialized to false
//     vector<bool> seen(x + 1, false);

//     for (long long int i = 0; i < x - 1; i++) {
//         long long int temp;
//         cin >> temp;
//         seen[temp] = true; // Mark the number as seen
//     }

//     // Single loop to find the one that is still false
//     for (long long int i = 1; i <= x; i++) {
//         if (!seen[i]) {
//             cout << i << endl;
//             break;
//         }
//     }

//     return 0;
// }