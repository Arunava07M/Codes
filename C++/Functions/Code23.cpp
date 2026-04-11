//Local and Global Scope

#include<iostream>
using namespace std;

int n = 1;//Global Variable -> Global Scope runs everywhere

void fun(){
    int a = 2;//Local Variable and runs only inside this function
    cout << n << endl;
    cout << a << endl;
}

int main(){
    cout << n << endl;
    fun();
    return 0;
}