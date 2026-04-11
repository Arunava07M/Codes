//Selection Sort
//Time Complexity -> O(n^2)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void selectionSort(vector<int> &arr, int n){
    for(int i = 0; i < n - 1; i++){
        int smallestIndex = i;//Unsorted part starting
        for(int j = i + 1; j <= n - 1; j++){
            if(arr[j] < arr[smallestIndex]){//if we reverse the comparison then it will
                //be printed in decreasing order
                smallestIndex = j;//by this the whole loop is iterated
            }//and the smallest element is found out and its index is stored in smallestIndex
        }

        if(smallestIndex != i){
            swap(arr[smallestIndex],arr[i]);//here it is swapped
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

    selectionSort(arr,n);
    return 0;
}