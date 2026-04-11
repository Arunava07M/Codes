//Calculator using Switch Statement
#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "a = ";
    cin >> a;

    int b;
    cout << "b = ";
    cin >> b;

    char op;
    cout << "Operation = ";
    cin >> op;

    switch(op){
        case 'A': cout << "Addition = " << (a + b) << endl;
                break;
        case 'B': cout << "Subtraction = " << (a - b) << endl;
                break;
        case 'C': cout << "Multiplication = " << (a * b) << endl;
                break;
        case 'D': cout << "Division = " << (a / b) << endl;
                break;
        case 'E': cout << "Modulo(Remainder) = " << (a % b) << endl;
                break;
        default: cout << "Operation can Not be Performed" << endl;
    }
    return 0;
}