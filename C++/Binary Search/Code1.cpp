// Binary Search Algorithm -> Two Pointers Approach
// Time Complexity -> O(log n) -> Iterative Code

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int tar;
    cout << "Enter the number = ";
    cin >> tar;

    vector<int> nums = {-1, 0, 3, 4, 5, 9, 12};
    int n = nums.size();

    int start = 0;
    int end = n - 1;

    int f = 0;

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(nums[mid] == tar){
            int d = mid;
            cout << "found at index = " << d << endl;
            f = 1;
            break;
        }
        else if(tar < nums[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    if(f != 1){
        cout << "element is not present" << endl;
    }
    
    return 0;
}