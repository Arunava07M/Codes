//Reverse of an array using two pointer approach
#include<iostream>
#include<algorithm>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr)/sizeof(int);
    reverseArray(arr, size);
    return 0;
}
