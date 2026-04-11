//Pattern 7 -> when n = 4
//1
//22
//333
//4444
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    int d = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << d << " ";//you could have got the same result if printed "i" here
        }
        d++;
        cout << endl;
    }
    return 0;
}
