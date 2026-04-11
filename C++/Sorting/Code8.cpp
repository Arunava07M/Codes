//Merge 2 Sorted Arrays
//Approach 2
//Time Complexity -> O(m + y)
//Space Complexity -> O(m + y)
#include<iostream>
#include<vector>
using namespace std;

void mergeSortedArray(vector<int> &arr, int n, int m, vector<int> &nums, int x, int y){
    int a = 0;
    int b = 0;
    vector<int> c(m + y);
    for(int i = 0; i <= m + y - 1; i++){
        if(arr[a] <= nums[b]){
            if(arr[a] == 0){
                c[i] = nums[b];
                a++;
                b++;
            }
            else{
                c[i] = arr[a];
                a++;
            }
        }
        else{
            c[i] = nums[b];
            b++;
        }
    }
    for(int i = 0; i <= m + y - 1; i++){
        cout << c[i] << " ";
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