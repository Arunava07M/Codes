//Merge 2 Sorted Arrays
//Approach 3(Optimized)
//Time Complexity -> O(m + y)
//Space Complexity -> O(m + y)
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void mergeSortedArray(vector<int> &arr, int n, int m, vector<int> &nums, int x, int y){
    int a = m - 1;
    int b = x - 1;
    int c = m + y - 1;
    for(int i = c; i >= 0; i--){
        if(a >= 0 && b >= 0){
            if(arr[a] <= nums[b]){
                arr[i] = nums[b];
                b--;
            }
            else{
                arr[i] = arr[a];
                a--;
            }
        }
        else if(a < 0){
            arr[i] = nums[b];
            b--;
        }
        else if(b < 0){
            arr[i] = arr[a];
            a--;
        }
    }
    
    for(int i = 0; i <= n - 1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {4,5,6,0,0,0};
    int n = arr.size();
    int m = 3;

    vector<int> nums = {1,2,3};
    int x = nums.size();
    int y = 3;

    mergeSortedArray(arr, n, m, nums, x, y);
    return 0;
}