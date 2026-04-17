//Container with Most Water -> Optimized
//Time Complexity -> O(n)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> lines = {1,8,6,2,5,4,6,3,7};
    int n = lines.size();

    int start = 0;
    int end = n - 1;

    int maxAmount = 0;

    while(start < end){
        int ht = min(lines[start],lines[end]);
        int w = end - start;
        int area = ht * w;
        maxAmount = max(maxAmount,area);
        if(ht == lines[start]){//Shifting big line will not give us maximum water 
            start++;           //so shifted smaller one to get the maximum water
        }                      //because small line controls how much water will get stored
        else{                  
            end--;
        }
        //in place of if and else i could have used ternaray operator
        //lines[start] < lines[end] ? start++ : end--;
    }
    cout << "Maximum amount of water that can be stored = " << maxAmount << endl;
    return 0;
}

/*My Code
#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

void water(vector<int>& nums){
    int n = nums.size();
    int d = 0;
    int start = 0;
    int end = n - 1;
    while(start < end){
        int f = 0;
        if(nums[start] > nums[end]){
            f = (end - start) * (nums[end]);
            end--;
        }
        else{
            f = (end - start) * (nums[start]);
            start++;
        }
        d = max(d,f);
    }
    cout << "max amount of water container can hold is = " << d << " liters" << endl;
    
}
int main(){
    vector<int> a = {1,8,6,2,5,4,8,3,7};
    water(a);
}*/