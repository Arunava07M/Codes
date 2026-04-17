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
/* My Code
#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

void pairsum(vector<int> nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int f = n/2;
    int g = 0;
    int d = 1;
    for(int i = 0; i <= n - 1; i++){
        if(i == n-1){
            break;
        }
        if(nums[i] != nums[i + 1]){
            d = 1;
        }
        else{
            d++;
        }
        if(f < d){
            f = d;
            g = i;
        }
    }
    return nums[g];
}
int main(){
    vector<int> a = {2,2,1,1,2,2};
    int target = 22;
    pairsum(a);
}*/
