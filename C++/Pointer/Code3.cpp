//Practice Question

#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int *p = &a;  //There is no difference between int* p and int *p
    int **q = &p;

    cout << *p << endl; //5
    cout << **q << endl; //5
    cout << p << endl; // address of a
    cout << *q << endl; // q has address of p so the value stored in p is the output
}