// Majority Element -> Brute Force Approach (with Sorting)
// Time Complexity: O(n log n)
#include <iostream>
#include <vector>
#include <algorithm> // For sort
using namespace std;

int main() {
    vector<int> nums = {1, 1, 1, 2, 2};
    int n = nums.size();

    
    sort(nums.begin(), nums.end());//Due to this sort the time complexity is O(nlogn)

    int e = 1; 

    for (int i = 0; i < n - 1; i++) { 
        if(nums[i] == nums[i + 1]){
            e++;
        } 
        else{
            e = 1; // Reset count if sequence breaks
        }

        if(e > (n / 2)){
            cout << "Majority Element is = " << nums[i] << endl;
            break;
        }
    }

    return 0;
}
