//Product of Array Except Self -> Optimized
//Time Complexity -> O(n) 
//Space Complexity -> O(1)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();

    vector<int> ans(n, 1);

    for(int i = 1; i < n; i++){
        ans[i] = ans[i - 1] * nums[i - 1];//Left Prod are stored
    }

    int rightProd = 1;
    for(int i = n - 1; i >= 0; i--){
        ans[i] = ans[i] * rightProd;
        rightProd = rightProd * nums[i];
    }

    cout << "ans = ";
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
