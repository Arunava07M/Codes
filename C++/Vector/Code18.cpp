//Pair Sum -> Shradha Ma'am 's Code
#include <iostream>
#include <vector>
using namespace std;


vector<int> pairSum(vector<int> arr, int target) {
    vector<int> ans;
    int start = 0;
    int end = arr.size() - 1;

    while (start < end) {
        int sum = arr[start] + arr[end];

        if (sum < target) {
            start++;
        } else if (sum > target) {
            end--;
        } else {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 22;

    vector<int> result = pairSum(nums, target);
    cout << "The Pair Sum is = (" << result[0] << ", " << result[1] << ")" << endl;
    //returns indices
    return 0;
}