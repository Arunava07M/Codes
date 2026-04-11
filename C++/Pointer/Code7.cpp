//Pointer Arithmetic

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};

    cout << arr << endl;
    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;
    cout << *(arr + 3) << endl;
    cout << *(arr + 4) << endl;

    int* ptr1;//if 100
    int* ptr2 = ptr1 + 2;// then 108
    cout << ptr2 - ptr1 << endl;// 108 - 100 = 8 8 means 2 bytes so answer is 2

    cout << (ptr2 > ptr1) << endl;//1 means yes means true 0 means no means false
    return 0;
}