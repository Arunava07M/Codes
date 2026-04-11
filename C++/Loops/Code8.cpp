//Print factorial of a number n
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your number = ";
    cin >> n;

    int d = 1;

    for(int i = n; i > 0; i--){
        d = d * i;
    }
    cout << "Factorial is = " << d << endl;
    return 0;
}