//Majority Element -> Brute Force Approach
//Time Complexity -> O(n^2)
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,2,1,1};
    int n = nums.size();

    for(int i : nums){//I used for each loop
        int e = 0;
        for (int j : nums){
            if(i == j){
                e++;
            }
        }
        if(e > (n/2)){
            cout << "Majority Element = " << i << endl;
            break;
        }
    }
    return 0;
}