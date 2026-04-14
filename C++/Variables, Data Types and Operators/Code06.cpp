//Operators in c++
//Calculator
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a;
    double b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    //Arithmetic Operators
    cout << "Sum = " << (a + b) << endl;
    cout << "Sum = " << a + b << endl;
    cout << "Difference = " << (a - b) << endl;
    cout << "Multiplication = " << (a * b) << endl;
    cout << "Division = " << (a / b) << endl; // 2
    cout << "Division = " << (a / (double)b) << endl; // 2.5
    int c = (a / (double)b) ;
    cout << "Division = " << c << endl; // 2
    cout << "Remainder = " << (a % b) << endl;
    cout << "Remainder = " << fmod(a,b) << endl;//Thhis works as modulo operator but 
    //use it for all cases but only modulo operator "%" does not work in double
    //so we use #include<cmath> to use "fmod()" to use it with double 
    return 0;
}