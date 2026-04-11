//Pair Sum -> Same as previous but things get printed in main function
#include <iostream>
#include <vector>
using namespace std;

// Function to return the indices of two numbers that sum to the target
vector<int> pairSum(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;

    while (start < end) {
        int sum = arr[start] + arr[end];

        if (sum < target) {
            start++;
        } else if (sum > target) {
            end--;
        } else {
            return {start, end}; // Return the indices
        }
    }

    return {}; // No pair found
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 22;

    vector<int> result = pairSum(nums, target);

    if (result.size() == 2) {
        int i = result[0];
        int j = result[1];

        cout << "Indices of Pair Sum = (" << i << ", " << j << ")" << endl;
        cout << "Values at those indices = (" << nums[i] << ", " << nums[j] << ")" << endl;
    } else {
        cout << "No pair found with the given target." << endl;
    }

    return 0;
}

