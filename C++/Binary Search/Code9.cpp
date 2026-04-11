//Single element in a Sorted array
//Time Complexity -> O(log n)
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 5, 5};
    //you can try {3,3,7,7,10,11,11}
    int n = arr.size();

    int start = 0;
    int end = n - 1;

    if(n == 1){
        cout << "Single Element = " << arr[0] << endl;
        return 0;
    }

    while(start <= end){
        int mid = start + (end - start)/2;
        // Handle the first element (mid = 0)
        if (mid == 0 && arr[mid] != arr[mid + 1]) {
            cout << "Single Element = " << arr[mid] << endl;
            break;
        }
        // Handle the last element (mid = n - 1)
        else if (mid == n - 1 && arr[mid] != arr[mid - 1]) {
            cout << "Single Element = " << arr[mid] << endl;
            break;
        }
        else if(arr[mid - 1] < arr[mid] && arr[mid] < arr[mid + 1]){
            //you could have written this arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]
            cout << "Single Element = " << arr[mid] << endl;
            break;
        }
        else if(mid % 2 == 0){
            if(arr[mid] == arr[mid - 1]){
                end = mid - 1;
            }
            else{//here else means arr[mid] == arr[mid + 1]
                start = mid + 1;
            }
        }
        else{//here else means mid % 2 != 0
            if(arr[mid] == arr[mid - 1]){
                start = mid + 1;
            }
            else{//here else means arr[mid] == arr[mid + 1]
                end = mid - 1;
            }
        }
    }
    return 0;
}