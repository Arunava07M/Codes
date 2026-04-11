//Single Element in a Sorted Array
//Time Complexity -> O(n)
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {3,3,7,7,10,11,11,11};
    //Try for this:- vector<int> arr = {1,1,2,3,3,4,4,8,8};
    int n = arr.size();

    if (arr[0] != arr[1]) {
        cout << "The single element is: " << arr[0] << endl;
    }
    if (arr[n - 1] != arr[n - 2]) {
        cout << "The single element is: " << arr[n - 1] << endl;
    }
    
    for(int i = 0; i <= n - 1; i++){
        if(arr[i - 1] < arr[i] && arr[i] < arr[i + 1]){
            cout << "The single element is: " << arr[i] << endl;
            break;
        }
    }

    return 0;
}