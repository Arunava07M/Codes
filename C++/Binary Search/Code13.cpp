//Aggressive Cows Problem
//Time Complexity -> O(log(Range) * n) -> now basically we consider
//this as biger than nlogn of sort but if sort function has big then that is considered
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool Possible(vector<int> &arr, int n, int c, int mid){//O(n)
    int cow = 1;
    int laststallposition = arr[0];
    int minAllowedLength = mid;

    for(int i = 1; i <= n - 1; i++){
        if((arr[i]-laststallposition) >= minAllowedLength){
            cow++;
            laststallposition = arr[i];
        }
    }
    if(cow >= c){
        return true;
    }
    else{
        return false;
    }
}

int largestMinimumDistance(vector<int> &arr,int n, int c){
    sort(arr.begin(),arr.end());//O(nlogn)
    /*
    see you had to do sort but you could have done something liek this also
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i <= n - 1; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    } for max - min stuff in end but now arr[n-1] - arr[0] will handle it properly*/
    int start = 1;//Starting from 0 or 1 is good
    int end = arr[n-1] - arr[0];

    int ans = -1;

    while(start <= end){//O(log(Range) * n) -> the n is multiplied because we call an
        int mid = start + (end - start)/2; // possible function which is of O(n)
        if(Possible(arr,n,c,mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;

}

int main(){
    vector<int> arr = {1,2,8,4,9};
    int n = arr.size();
    int c = 3;

    cout << "Largest Minimum Distance = " << largestMinimumDistance(arr,n,c) << endl;
}