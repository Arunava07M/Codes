//Pattern 18:- when n = 4
//AAAA
// BBB
//  CC
//   D

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    char d = 'A';

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