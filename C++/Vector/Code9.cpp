//Maximum Subarray Sum -> Most Optimized 

//Kadane 's Algorithm
#include<iostream>
using namespace std;

int main(){
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr) / sizeof(int);

    int e = INT_MIN;
    int sum = 0;

    for(int i = 0; i <= n - 1; i++){
        sum = sum + arr[i];
        e = max(e,sum);
        if(sum < 0){
            sum = 0;
        }
    }
    /*
    In vectors you can do like 
    for(int val : nums){ -> This is for each loop
        sum = sum + val; -> as val is not index but the value in the index, property of
                            for each loop
        e = max(e,sum);
        if(sum < 0){
            sum = 0;
        }
    }
        */
    cout << "Maximum Subarray Sum = " << e << endl;
    return 0;
}