#include<iostream>
using namespace std;

void range(vector<int> arr){
    int n = arr.size();
    for(int start = 0; start <= n - 1; start++){
        for(int end = start; end <= n - 1; end++){
            for(int k = start; k <= end; k++){
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}

int main(){
    int n;
    cout << "Enter n = ";
    cin >> n;
    
    vector<int> arr = {1,2,3,4,5};
    range(arr);
    return 0;
}