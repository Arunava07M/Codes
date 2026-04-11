//Pair Sum (Optimized Code) – Based on Shradha Ma'am's code 
//Time Complexity -> O(n)

#include <iostream>
#include <vector>
using namespace std;

void pairSum(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;

    while (start < end) {
        int sum = arr[start] + arr[end];
        if (sum < target) {
            start++;
        } else if (sum > target) {
            end--;
        } else {
            cout << "The Pair Sum is = (" << arr[start] << ", " << arr[end] << ")" << endl;
            return;
        }
    }

    cout << "No pair found with the given target." << endl;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    pairSum(nums, target);  // Just call it — it handles its own printing

    return 0;
}

