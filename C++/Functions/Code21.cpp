//Write a function to find the product of 2 numbers - a and b

#include<iostream>
using namespace std;

void product(int a, int b){
    int c = a * b;
    cout << "product = " << c << endl;
    return;
}

int main(){
    int a;
    cout << "a = ";
    cin >> a;

    int b;
    cout << "b = ";
    cin >> b;
    
    product(a,b);
    return 0;
}