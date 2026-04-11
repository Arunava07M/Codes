//Peak index in Mountain Array
//Time Complexity -> O(log n)
//Ma'am 's Code

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {0,3,9,5,2};
    int n = arr.size();

    int start = 1;
    int end = n - 2;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]){
            cout << "Found at index = " << mid << endl;
            break;
        }
        if(arr[mid - 1] < arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return 0;
}