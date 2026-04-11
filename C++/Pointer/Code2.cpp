//Pointer

#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    int** ptr2 = &ptr;//Pointer to Pointer
    cout << ptr << endl;
    cout << &a << endl;
    cout << &ptr << endl;
    cout << ptr2 << endl;
    cout << &ptr2 << endl;
    cout << *(&a) << endl;
    cout << *(ptr) << endl;
    cout << *(ptr2) << endl;
    cout << **(ptr2) << endl;

    int* ptr1 = NULL;//Null Pointer
    cout << ptr1 << endl;
    return 0;
}