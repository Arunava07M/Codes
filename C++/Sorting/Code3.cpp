//Insertion Sort
//Time Complexity -> O(n^2)

#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &arr, int n){
    for(int i = 0; i <= n - 1; i++){
        int current = arr[i];
        int prev = i - 1;
        while(prev >= 0 && arr[prev] > current){// if we reverse comparison of prev and 
            arr[prev + 1] = arr[prev];//current then it will print in decreasing order
            prev--;
        }
        arr[prev + 1] = current;
    }
    for(int i = 0; i <= n - 1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {4,1,5,2,3};
    int n = arr.size();

    insertionSort(arr,n);
    return 0;
}