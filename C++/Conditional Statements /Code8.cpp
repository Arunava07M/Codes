#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "a = ";
    cin >> a;

    int b;
    cout << "b = ";
    cin >> b;

    int c;
    cout << "c = ";
    cin >> c;

    if(a > b && a > c){
        cout << "a is greater than b and c" << endl << "a = " << a << endl;
    }
    else if(b > a && b > c){
        cout << "b is greater than a and c" << endl << "b = " << b << endl;
    }
    else if(c > a && c > b){
        cout << "c is greater than a and b" << endl << "c = " << c << endl;
    }
    else{
        cout << "a = b = c" << endl;
    }
    return 0;
}