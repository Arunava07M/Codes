//Basics of Subarray Concept
#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;

    for(int start = 0; start <= n - 1; start++){
        for(int end = start; end <= n - 1; end++){
            for(int a = start; a <= end; a++){
                cout << arr[a];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}