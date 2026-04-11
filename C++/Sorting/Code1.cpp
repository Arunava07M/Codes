//Bubble Sort
//Time Complexity -> O(n^2)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bubbleSort(vector<int> &arr, int n){
    for(int i = 0; i < n - 1; i++){
        int d = 0;
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1]){// if we reverse the comparison it will be printed in 
                //decreasing order
                swap(arr[j],arr[j+1]); 
                d++;
                /*
                if you did not want to use swap function, then swap occurs like this
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp; 
                */              
            }
        }
        if(d == 0){//if no swaps are made then the array is already sorted
            break;
        }
        
    }    
    for(int i = 0; i <= n - 1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {4,1,5,2,3};
    int n = arr.size();

    bubbleSort(arr,n);
    return 0;
}