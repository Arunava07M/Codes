//Sort an array with 0s, 1s and 2s
//Approach -> 3
//Time Complexity -> O(n)
//Space Complexity -> O(1)
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void sortArray(vector<int> &arr, int n){
    int a = 0;
    int b = 0;
    int c = 0;
    for(int i = 0; i <= n - 1; i++){
        if(arr[i] == 0){
            a++;
        }
        else if(arr[i] == 1){
            b++;
        }
        else{
            c++;
        }
    }
    
    for(int i = 0; i <= a - 1; i++){
        arr[i] = 0;
    }
    for(int i = a; i <= a + b - 1; i++){
        arr[i] = 1;
    }
    for(int i = a + b; i <= a + b + c - 1; i++){
        arr[i] = 2;
    }
    
    /*you could have done in this way too
    int index = 0;
    for(int i = 0; i <= a - 1; i++){
        arr[index] = 0;
        index++;
    }
    for(int i = 0; i <= b - 1; i++){
        arr[index] = 1;
        index++;
    }
    for(int i = 0; i <= c - 1; i++){
        arr[index] = 2;
        index++;
    }
    */
    

    for(int i = 0; i <= n - 1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    int n = arr.size();

    sortArray(arr,n);
    return 0;
}
