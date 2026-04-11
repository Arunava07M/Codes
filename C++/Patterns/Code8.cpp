//Pattern 8 -> when n = 4
//1
//12
//123
//1234
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        int d = 1;
        for(int j = 1; j <= i; j++){
            cout << d << " ";//you could have got the same result if printed "j" here
            d++;
        }
        cout << endl;
    }
    return 0;
}