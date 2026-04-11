//Write a function which takes 2 numbers as parameters (a and b) and outputs:
//a² + b² + 2ab

#include<iostream>
#include<cmath>
using namespace std;

void expression(){
    int a;
    cout << "a = ";
    cin >> a;

    int b;
    cout << "b = ";
    cin >> b;

    int c = pow(a,2) + pow(b,2) + (2 * a * b);
    cout << "Output = " << c << endl;
    return;
}

int main(){
    expression();
    return 0;
}