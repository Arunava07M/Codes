//Maximum Subarray Sum (Brute Force Approach) -> This is O(n^3)
#include<iostream>
using namespace std;

int main(){
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr) / sizeof(int);

    int e = INT_MIN;

    for(int start = 0; start <= n - 1; start++){
        for(int end = start; end <= n - 1; end++){
            int d = 0;
            for(int a = start; a <= end; a++){
                d = d + arr[a];
            }
            e = max(e,d);
            // if you dont want to use max function then you can do this
            /*
            if (d > e) {
                e = d;
            }
                //does the same thing max function does
                //but for this also you need to have e = INT_MIN;
            */
        }
    }
    cout << "Maximum Subarray Sum = " << e << endl;
    return 0;
}