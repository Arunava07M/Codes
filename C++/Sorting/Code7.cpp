//Merge 2 Sorted Arrays
//Brute force approach
//Time Complexity -> O((m + y) log(m + y))
#include<iostream>
#include<vector>
using namespace std;

void mergeSortedArray(vector<int> &arr, int n, int m, vector<int> &nums, int x, int y){
    int index = 0;
    for(int i = m; i <= m + y - 1; i++){
        arr[i] = nums[index];
        index++;
        if(index == y){
            break;
        }
    }
    sort(arr.begin(),arr.end());
    for(int i = 0; i <= n - 1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {1,2,3,0,0,0};
    int n = arr.size();
    int m = 3;

    vector<int> nums = {2,5,6};
    int x = nums.size();
    int y = 3;

    mergeSortedArray(arr, n, m, nums, x, y);
    return 0;
}