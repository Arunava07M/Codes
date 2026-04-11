#include<iostream>
using namespace std;

void changeA(int &b){//Pass by reference using alias used ampersand symbol before the variable
    b = 20;          //ampersand symbol is not of address but of alias
}                    //meaning for a we are using another name but both are same
                     //changing b means it will change a just like ironman and tonystark
int main(){          //are the same person
    int a = 10;

    changeA(a); // Pass by reference

    cout << a << endl;
    return 0;
}