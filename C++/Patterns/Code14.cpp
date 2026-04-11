//Pattern 14:- when n = 4
//A
//BA
//CBA
//DCBA

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    char ch = 'A';

    for(int i = 1; i <= n; i++){
        char d = ch;
        for(int j = 1; j <= i; j++){
            cout << d << " ";
            d--;
        }
        ch++;
        cout << endl;
    }
    return 0;
}