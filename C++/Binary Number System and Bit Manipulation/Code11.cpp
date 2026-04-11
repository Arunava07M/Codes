//Write a function to clear last i bits of a number

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    int i;
    cout << "i = ";
    cin >> i;

    int d = -1;// ~0 = -1
    int e = (n & (d << i));

    cout << e << endl;
    return 0;
}