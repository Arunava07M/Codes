//136. Single Number Question in Leetcode

/*
Given a non empty array of integers nums, every element appears twice except for one.
Find that single one.
You must implement a linear time complexity and use only constant extra space.
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int val : nums) {
            ans = ans ^ val;
        }
        return ans;
    }
};
int main() {
    int n;
    cout << "Enter the number of elements (must be odd): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Invalid input. Number of elements must be odd (e.g., 2n + 1)." << endl;
        return 1;
    }

    vector<int> nums(n);
    cout << "Enter " << n << " integers (every element appears twice except one): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    int result = sol.singleNumber(nums);
    cout << "The single number is: " << result << endl;

    return 0;
}

