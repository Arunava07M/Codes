//Pattern 19:- when n = 4
//   1  
//  123
// 12345
//1234567

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    int d = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        int e = d;
        for(int k = 1; k <= (2*i - 1); k++){
            cout << e;
            e++;
        }

        for(int l = 1; l <= n - i; l++){
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}