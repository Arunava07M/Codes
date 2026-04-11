//Calculate sum of digits of a number

#include<iostream>
using namespace std;

void digits(int n){
    int s = 0;
    int d = 0;
    for(int i = n; i > 0; i = i/10){
        d = i % 10;
        s = s + d;
    }
    cout << "Sum of digits = " << s << endl;
    return;
}

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    digits(n);
    return 0;
}