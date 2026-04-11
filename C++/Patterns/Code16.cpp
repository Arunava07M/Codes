//Pattern 16:- when n = 4
//1111
// 222
//  33
//   4

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    int d = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int k = 1; k <= (n - i + 1); k++){
            cout << d;
        }
        d++;
        cout << endl;
    }
    return 0;
}
