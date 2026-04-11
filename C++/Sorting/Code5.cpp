//Sort an array with 0s, 1s and 2s
//Approach -> 2
//Time Complexity -> O(n)
//Space Complexity -> O(n)
#include<iostream>
#include<vector>

using namespace std;

void sortArray(vector<int> &arr, int n){
    vector<int> nums(n);// n is size of vector arr
    int index = 0;//for nums array
    for(int i = 0; i <= 2; i++){// it runs three times so O(1)
        for(int j = 0; j <= n - 1; j++){// it runs n times so O(n)
            if(arr[j] == i){
                nums[index] = arr[j];
                index++;
            }
        }
    }
    for(int i = 0; i <= index - 1; i++){//(index - 1) because last value 2 will be printed but
        cout << nums[i] << " ";//after that index will be incremented but there are no
    }//more values to be included so index = 10..so for that (index - 1)
    cout << endl;
}

int main(){
    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    int n = arr.size();

    sortArray(arr,n);
    return 0;
}
