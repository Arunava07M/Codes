//Write a function that prints the largest of 3 numbers.

#include<iostream>
using namespace std;

void largest(int a, int b, int c){
    if(a > b && a > c){
        cout << "a is greater than b and c" << endl << "a = " << a << endl;
    }
    else if(b > a && b > c){
        cout << "b is greater than a and c" << endl <<  "b = " << b << endl;
    }
    else if(c > a && c > b){
        cout << "c is greater than a and b" << endl << "c = " << c << endl;
    }
    else{
        cout << "a = b = c or any two is equal and one is less" << endl;
    }
    return;
}

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

    largest(a,b,c);
    return 0;
}