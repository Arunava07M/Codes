//Digits in a number

#include<iostream>
#include<cmath>
using namespace std;

void digitsinaNumber(int n){
    cout << "Digits = ";
    while(n > 0){
        int a = n % 10;
        cout << a << endl;
        n = n / 10;
    }
}

int main(){
    int n;
    cout << "Enter Your Number = ";
    cin >> n;

    digitsinaNumber(n);
    return 0;
}