//Euclid 's alogrithm
#include<iostream>
using namespace std;

void euclid(int a , int b){
    if (a == 0 && b == 0) {
        cout << "GCD is undefined for a = 0 and b = 0" << endl;
        return;
    }

    while(a != 0 && b != 0){
        if(a > b){
            a = a % b;
        }
        else{
            b = b % a;
        }
    }

    if(a == 0){
        cout << "GCD = " << b << endl;
    }
    else{
        cout << "GCD = " << a << endl;
    }
    //you could have written "cout << "GCD = " << (a == 0 ? b : a) << endl;"
    //instead of if else statements
}

int main(){
    int a = 20;
    int b = 28;

    euclid(a, b);
    return 0;
}
