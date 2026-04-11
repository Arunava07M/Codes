#include<iostream>
using namespace std;

void changeA(int* ptr){//Pass by reference using pointers
    *ptr = 20;
}

int main(){
    int a = 10;

    changeA(&a); // Pass by reference

    cout << a << endl;
    return 0;
}