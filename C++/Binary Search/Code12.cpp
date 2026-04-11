//Painter 's Parition Problem
//Time Complexity -> O(logRange * n) or O(log(sum) * n)

//Same Logic as Book Allocation Problem
#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int mid){
    int painter = 1;
    int time = 0;
    int maxAllowedTime = mid;
    for(int i = 0; i <= n - 1; i++){
        if(arr[i] > maxAllowedTime){
            return false;
        }
        if((arr[i] + time) <= maxAllowedTime){
            time = time + arr[i];
        }
        else{
            painter++;
            time = arr[i];
        }
    }
    if(painter <= m){
        return true;
    }
    else{
        return false;
    }
}

int minimumTime(vector<int> &arr, int n, int m){
    int sum = 0;
    for(int i = 0; i <= n - 1; i++){
        sum = sum + arr[i];
    }
    int start = 0;//if you wrote 40 that is also correct
    int end = sum;

    int ans = -1;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(isValid(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}


int main(){
    vector<int> arr = {40,30,10,20};
    int n = arr.size();

    int m = 2;
    cout << "Minimum Time = " << minimumTime(arr, n, m) << endl;
    return 0;
}