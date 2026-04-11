//Majority Element -> Brute Force Approach
//Time Complexity -> O(n^2)
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,2,1,1};
    int n = nums.size();

    for(int i = 0; i <= n - 1; i++){//I used normal for loop
        int e = 1;
        for (int j = i + 1; j <= n - 1; j++){
            if(nums[i] == nums[j]){
                e++;
            }
        }
        if(e > (n/2)){
            cout << "Majority Element = " << nums[i] << endl;
        }
    }
    return 0;
}