//Sort an array with 0s, 1s and 2s
//Approach -> 1
//Time Complexity -> O(nlogn)
//Space Complexity -> O(1)
#include<iostream>
#include<vector>
using namespace std;

void sortArray(vector<int> &arr, int n){

}

int main(){
    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    int n = arr.size();

    sort(arr.begin(),arr.end());
    for(int i = 0; i <= n - 1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

