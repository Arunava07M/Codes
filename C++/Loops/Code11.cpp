//Print a number from n to 1
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number = ";
    cin >> n;

    for(int i = n; i > 0; i--){
        cout << i << " ";
    }
    cout << endl;
    /*
    #include <iostream>
    using namespace std;

    int main() {
        int n;
        cout << "Enter the number = ";
        cin >> n;

        cout << "i =";
        for (int i = n; i > 0; i--) {
        cout << " " << i;
    

        cout << endl; // Optional: adds newline after output
        return 0;
    }
        Here Output is "i = 5 4 3 2 1" if n = 5
*/
    return 0;
}
