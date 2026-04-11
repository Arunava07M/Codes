//Pattern 2:- when n = 4
//ABCD
//ABCD
//ABCD
//ABCD
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        char ch =  'A';
        for(int j = 1; j <= n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}