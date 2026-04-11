//Binary to Decimal

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    int d = 0;
    int e = n;

    int a = 0;

    while(e > 0){
        d = d + (e % 10) * pow(2,a);
        e = e / 10;
        a = a + 1;
    }
    cout << d << endl;
    return 0;
}