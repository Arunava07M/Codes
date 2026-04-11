//Peak index in Mountain Array
//Time Complexity -> O(log n)
//This is my Code

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {0,3,8,9,5,2};
    int n = arr.size();

    int start = 0;
    int end = n - 1;

    while(start < end){
        int mid = start + (end - start)/2;
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    if(start == end){
            cout << "Peak Element found at index = " << start << endl;
    }


        //but this code will also give error as it will also fce out of bound condition

        /*You could have done this but this will give error as out of bounds
        while(start <= end){
          int mid = start + (end - start)/2;
        if(arr[mid] > arr[mid - 1]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        }  */

        /*you could have done this also but same error as above
        while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }*/
    return 0;
}
