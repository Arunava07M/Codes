//Write a function to swap the max and min number of an array

#include<iostream>
#include<algorithm>
using namespace std;

void maxMinSwap(int arr[], int size){
    int e = INT_MIN;
    int maxIndex = 0;

    int d = INT_MAX;
    int minIndex = 0;

    for(int i = 0; i <= size - 1; i++){
        if(arr[i] > e){
            e = arr[i];
            maxIndex = i;
        }
        if(arr[i] < d){
            d = arr[i];
            minIndex = i;
        }
    }
    swap(arr[maxIndex],arr[minIndex]);

    for(int i = 0; i <= size - 1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}

int main(){
    int arr[] = {-1,-2,-3,4,5};//swap -3(min) and 5(max)
    int size = sizeof(arr)/sizeof(int);

    maxMinSwap(arr,size);
    return 0;
}
