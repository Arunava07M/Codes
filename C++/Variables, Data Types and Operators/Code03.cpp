#include<iostream>
using namespace std;

int main(){
    int age = 25;
    cout << age << endl;
    cout << sizeof(age) << endl;//Proves int has 4 bytes
    char grade = 'A';
    cout << grade << endl;
    cout << sizeof(grade) << endl;
    float PI = 3.14f;//Values of which do not change is generally denoted by capital letters
    cout << PI << endl;
    cout << sizeof(PI) << endl;
    bool isSafe = true; //use only small letter in true
    cout << isSafe << endl;//true -> 1 and false -> 0
    cout << sizeof(isSafe) << endl;
    double price = 100.99;
    cout << price << endl;
    cout << sizeof(price) << endl;
    return 0;
}