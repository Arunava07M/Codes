//Moore's Voting Algorithm -> Optimized
//Time Complexity -> O(n)

#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 2, 1, 1};
    int n = nums.size();

    int ans = 0;
    int freq = 0;

    // Step 1: Find candidate
    for (int i = 0; i < n; i++) {
        if (freq == 0) {
            ans = nums[i];
        }
        if (nums[i] == ans) {
            freq++;
        } else {
            freq--;
        }
    }

    // Step 2: Verify candidate
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == ans) {
            count++;
        }
    }

    if (count > n / 2) {
        cout << "Majority Element = " << ans << endl;
    } else {
        cout << "No Majority Element exists" << endl;
    }

    return 0;
}
