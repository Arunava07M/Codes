//Maximum Subarray Sum (Brute Force Approach with slight Optimization) -> This is O(n^3)
#include<iostream>
using namespace std;

int main(){
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr) / sizeof(int);

    int e = INT_MIN;

    for(int start = 0; start <= n - 1; start++){
        int d = 0;
        for(int end = start; end <= n - 1; end++){
            d = d + arr[end];
            e = max(e,d);
        }
    }
    cout << "Maximum Subarray Sum = " << e << endl;
    return 0;
}