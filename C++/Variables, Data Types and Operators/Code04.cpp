#include<iostream>
using namespace std;

int main(){
    char grade = 'A';
    int a = grade;//Implicit Conversion
    cout << a << endl;

    double price = 100.99;
    int newPrice = (int)price;//Explicit Conversion
    cout << newPrice << endl;
    return 0;
}