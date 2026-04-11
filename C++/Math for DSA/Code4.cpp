//Armstrong Number

#include<iostream>
#include<cmath>
using namespace std;

void armstrongNumber(int n){
    int c = n;
    int d = 0;
    while(n > 0){
        int a = n % 10;
        d = d + pow(a,3);
        n = n / 10;
    }
    if(d == c){
        cout << "The number is an Armstrong Number" << endl;
    }
    else{
        cout << "The number is not an Armstrong Number" << endl;
    }
}

int main(){
    int n;
    cout << "Enter Your Number = ";
    cin >> n;

    armstrongNumber(n);
    return 0;
}