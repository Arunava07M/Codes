//Write a function to calculate sum and product of all numbers in an array

#include<iostream>
using namespace std;

void sumProduct(int arr[], int size){
    int d = 0;
    int e = 1;
    for(int i = 0; i <= size - 1; i++){
        d = arr[i] + d;
        e = arr[i] * e;
    }
    cout << "Sum of all numbers in an array = " << d << endl;
    cout << "Product of all numbers in an array = " << e << endl;
    return;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);

    sumProduct(arr,size);
    return 0;
}