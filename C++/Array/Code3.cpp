#include<iostream>
using namespace std;

int main(){
    int marks[5];
    int size = sizeof(marks) / sizeof(int);

    for(int i = 0; i <= size - 1; i++){
        cout << "Enter marks for subject " << i + 1 << " = ";
        cin >> marks[i];
    }
    for(int i = 0; i <= size - 1; i++){
        cout << "The marks for subject " << i + 1 << " = " << marks[i] << endl;
    }
    return 0;
}