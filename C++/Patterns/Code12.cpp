//Pattern 12 -> when n = 4
//1
//23
//456
//78910
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;
    
    int d = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << d << " ";
            d++;
        }
        cout << endl;
    }
    return 0;
}