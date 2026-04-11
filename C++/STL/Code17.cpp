//Sorting Algorithms

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[5] = {3,5,8,1,2};
    int n = 5;

    sort(arr, arr + n);

    for(int i = 0; i <= n - 1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr + n, greater<int>());

    for(int i = 0; i <= n - 1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //you could have used for each loop also it works for array too

    vector<int> vec = {8,5,9,3,4};
    int x = vec.size();

    sort(vec.begin(), vec.end());

    for(int i = 0; i <= x - 1; i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    sort(vec.begin(), vec.end(), greater<int>());

    for(int i = 0; i <= x - 1; i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}