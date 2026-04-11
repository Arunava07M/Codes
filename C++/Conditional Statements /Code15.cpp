#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter a three digit number = ";
    cin >> n;

    int x = n;
    int d = 0;

    while(x > 0){
        int f = x % 10;
        int g = pow(f,3);//You could have done f * f * f
        d = d + g;
        x = x / 10;
    }

    if(d == n){
        cout << "The number is Armstrong Number" << endl;
    }
    else{
        cout << "The number is not Armstrong Number" << endl;
    }
    return 0;
}