//Write a function to print if a number is even or odd

#include<iostream>
using namespace std;

void evenOdd(int n){
    if(n % 2 == 0){
        cout << "It is an Even Number" << endl;
    }
    else{
        cout << "It is an Odd Number" << endl;
    }
    return;
}

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    evenOdd(n);
    return 0;
}