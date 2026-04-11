//Ternary Operator
#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "age = ";
    cin >> age;

    bool isAge;

    isAge = (age >= 18) ? true : false;
    cout << isAge << endl;
    return 0;
}