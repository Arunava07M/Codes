//Product of Array Except Self -> Brute Force Approach 
//Time Complexity -> O(n^2)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4};//Try this one also {-1,1,0,-3,3}
    int n = nums.size();

    vector<int> ans(n,1);

    cout << "ans = ";
    for(int i = 0; i <= n - 1; i++){
        int d = 1;
        for(int j = 0; j <= n - 1; j++){
            if(i != j){
                ans[i] = ans[i] * nums[j];
            }
        }
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}