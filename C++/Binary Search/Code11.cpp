//Book Allocation Problem
//Time Complextiy -> O(logRnage * n)
/*
So, the space complexity is:
O(n) for the input vector itself (which is necessary, since you must store the books),
O(1) extra auxiliary space for your calculations
*/

#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int mid){
    int student = 1;
    int pages = 0;
    int allowedPages = mid;
    for(int i = 0; i <= n - 1; i++){//O(n)
        if(arr[i] > allowedPages){
            return false;
        }
        if((pages + arr[i]) <= allowedPages){
            pages = pages + arr[i];
        }
        else{
            student++;
            pages = arr[i];
        }
    }
    if(student <= m){
        return true;
    }
    else{
        return false;
    }
}

int allocateBooks(vector<int> &arr, int n, int m){
    if(m > n){
        return -1;
    }
    int sum = 0;
    for(int i = 0; i <= n - 1; i++){//O(n)
        sum = sum + arr[i];
    }
    int start = 0;
    int end = sum;//start and end is range of possible answer
    int ans = -1;

    while(start <= end){//O(logRange * n) // n due to isValid function -> total no. of books
        int mid = start + (end - start)/2;//we have
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
    vector<int> arr = {2,1,3,4};
    //Try this :- vector<int> arr = {15,17,32};
    int n = arr.size();

    int m = 2;
    cout << "Minimum Possible in Maximum Pages = " << allocateBooks(arr,n,m) << endl;
    return 0;
}