//Pair Sum (Brute Force Approach) – Based on Shradha Ma'am's code
//Time Complexity -> O(n^2)
#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> arr;
    int n = nums.size();
    for(int i = 0; i <= n - 1; i++){
        for(int j = i + 1; j <= n - 1; j++){
            if(nums[i] + nums[j] == target){
                arr.push_back(i);
                arr.push_back(j);
                return arr;
            }
        }
    }
    return {};// This is important or else error will come...empty array
    // return empty vector if no pair found
}

int main(){
    vector<int> nums = {2,7,11,15};
    int tar = 9;

    vector<int> a = pairSum(nums, tar);

    if (!a.empty()){
        // !a.empty() means (a.size() > 0)
        cout << "The Pair Sum is = (" << a[0] << "," << a[1] << ")" << endl;
    } else {
        cout << "No pair found!" << endl;
    }

    return 0;
}
