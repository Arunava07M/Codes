//Next Permutation
//Optimal Approach

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextPermutation(vector<int> &arr, int n){
    int pivot = -1;
    for(int i = n - 2; i >= 0; i--){
        if(arr[i] < arr[i + 1]){
            pivot = i;
            break;
        }
    }
    if(pivot == -1){
        reverse(arr.begin(),arr.end());
        for(int i = 0; i <= n - 1; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    for(int i = n - 1; i > pivot; i--){
        if(arr[i] > arr[pivot]){
            swap(arr[i],arr[pivot]);
            break;
        }
    }

    reverse(arr.begin() + pivot + 1, arr.end());

    for(int i = 0; i <= n - 1; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
}

int main(){
    vector<int> arr = {1,2,3,6,5,4};
    int n = arr.size();

    nextPermutation(arr,n);
    return 0;
}