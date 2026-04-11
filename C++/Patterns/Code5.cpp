//Pattern 5 -> when n = 3
//ABC
//DEF
//GHI
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    char ch = 'A';

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}
