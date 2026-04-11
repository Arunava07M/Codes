//Maximum Subarray Sum -> Most Optimized 

//Kadane 's Algorithm using vectors and also printing the sub array through which we found
//out the max sum 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {3, -4, 5, 4, -1, 7, -8};

    int e = INT_MIN;
    int sum = 0;
    int start = 0, end = 0, tempStart = 0;

    for (int i = 0; i < nums.size(); ++i) {
        sum = sum + nums[i];

        if (sum > e) {
            e = sum;
            start = tempStart;
            end = i;
        }

        if (sum < 0) {
            sum = 0;
            tempStart = i + 1;
        }
    }

    cout << "Maximum Subarray Sum = " << e << endl;
    cout << "Subarray elements: ";
    for (int i = start; i <= end; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
