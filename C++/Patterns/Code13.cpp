//Pattern 13 -> when n = 4
//A
//BC
//DEF
//GHIJ
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;
    
    char d = 'A';

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << d << " ";
            d++;
        }
        cout << endl;
    }
    return 0;
}