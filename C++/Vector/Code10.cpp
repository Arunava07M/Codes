//Maximum Subarray Sum -> Most Optimized 

//Kadane 's Algorithm using vectors
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {3, -4, 5, 4, -1, 7, -8};

    int e = INT_MIN;
    int sum = 0;

    for(int val : nums){ 
        sum = sum + val; 
        e = max(e,sum);
        if(sum < 0){
            sum = 0;
        }
    }
    cout << "Maximum Subarray Sum = " << e << endl;
    return 0;
}