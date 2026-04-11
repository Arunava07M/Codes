//Single Element in a Sorted Array
//Brute Force Approach -> O(n^2)
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {3,3,7,7,10,11,11,11};
    //Try for this:- vector<int> arr = {1,1,2,3,3,4,4,8,8};
    int n = arr.size();

    for(int i = 0; i <= n - 1; i++){
        int d = 0;
        for(int j = 0; j <= n - 1; j++){
            if(i != j){
                if(arr[i] == arr[j]){
                    d = 1;
                }
            }
        }
        if(d == 0){
            cout << arr[i] << endl;
        }
    }
    return 0;
}