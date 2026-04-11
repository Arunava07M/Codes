#include<iostream>
using namespace std;

int main(){
    int marks[5] = {99, 100, 54, 36, 88};
    int size = sizeof(marks) / sizeof(int);//This is the way to find out size of an array
    for(int i = 0; i <= size - 1; i++){
        cout << marks[i] << endl;
    }
    return 0;
}