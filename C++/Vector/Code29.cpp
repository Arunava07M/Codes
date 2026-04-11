//Product of Array Except Self -> Optimized(Only Time complexity)
//Time Complexity -> O(n) but Space Complexity not Optimized
//Space Complexity -> O(n)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4};//Try this one also {-1,1,0,-3,3}
    int n = nums.size();

    vector<int> leftProd(n);// if i had written leftProd only without (n) then it would give 
                            //segmentation fault
    leftProd[0] = 1;

    for(int i = 1; i <= n - 1; i++){
        leftProd[i] = leftProd[i - 1] * nums[i - 1];
    }

    vector<int> rightProd(n);

    rightProd[n - 1] = 1;

    for(int i = n - 2; i >= 0; i--){
        rightProd[i] = rightProd[i + 1] * nums[i + 1];
    }

    vector<int> ans(n);

    for(int i = 0; i <= n - 1; i++){
        ans[i] = leftProd[i] * rightProd[i];
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}