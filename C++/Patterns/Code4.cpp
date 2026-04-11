//Pattern 4 -> when n = 3
//123
//456
//789
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    int d = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << d << " ";
            d++;
        }
        cout << endl;
    }
    return 0;
}
