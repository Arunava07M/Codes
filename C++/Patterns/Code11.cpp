//Pattern 11 -> when n = 4
//1
//21
//321
//4321
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;
    
    int d = 1;
    for(int i = 1; i <= n; i++){
        int e = d;
        for(int j = 1; j <= i; j++){
            cout << e << " ";
            e--;
        }
        d++;
        cout << endl;
    }
    return 0;
}