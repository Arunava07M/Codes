//Linear Search

#include<iostream>
using namespace std;

void linearSearch(int arr[], int size, int target){
    int d = 0;
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == target){
            cout << "The target variable is found at index " << i << endl;
            d = 1;
            break;
        }
    }
    if(d != 1){
        cout << "The target variable is not found" << endl;
    }
    return;
}

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;
    int target = 8;

    linearSearch(arr,size,target);
    return 0;
}