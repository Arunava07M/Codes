//Pair Sum (Brute Force Approach) -> My Code and works only when two pairs required not three

#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,7,11,15};
    int n = sizeof(arr)/sizeof(int);

    int d = 0;
    int target = 22;

    int f = 0;
    int g = 0;

    for(int i = 0; i <= n - 1; i++){
        for(int j = i; j <= n - 1; j++){
            if(i != j){
                d = arr[i] + arr[j];
                if(d == target){
                    f = i;
                    g = j;
                }
            }
        }
    }
    cout << "The Pair Sum is = " << "(" << arr[f] << "," << arr[g] << ")" << endl;
    return 0;
}