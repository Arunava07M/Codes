//For a positive n, write a program that prints the first n fibonacci numbers(assume n >= 2)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a Number = ";
    cin >> n;

    if (n < 2) {
        cout << "Please enter a number greater than or equal to 2." << endl;
        return 1;
    }
    int a = 0;
    int b = 1;
    int c = 0;

    cout << "Fibonacci Series = " << a << " " << b;

    for(int i = 0; i <= n; i++){
        c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}