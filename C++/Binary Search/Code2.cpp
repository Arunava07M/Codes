//Search in a Roated Sorted Array
//Time Complexity -> O(log n)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {3,4,5,6,7,0,1,2};
    int n = arr.size();

    int start = 0;
    int end = n - 1;

    int tar = 0;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == tar){
            cout << "Found at index = " << mid << endl;
            break;
        }
        if(arr[start] <= arr[mid]){//if left Sorted
            if(arr[start] <= tar && tar <= arr[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        else{// if Right Sorted
            if(arr[mid] <= tar && tar <= arr[end]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return 0;
}