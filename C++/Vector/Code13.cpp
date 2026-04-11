//This is not proper Pair Sum

//Pair Sum but here anomally like 2,4 is not considered -> see the array used
//here it is considered continuous -> Brute Force Approach 1 (a)
//This Code handles when two pairs give same value for eg {2,3,4,5}
//here 2+3 = 5 is also there and only 5 is also there

#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    int target = 5;
    int e = 0;

    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            int d = 0;
            for(int a = start; a <= end; a++){
                d += arr[a];
            }
            if(d == target){
                e = 1;
                cout << "The Pair = ";
                for(int i = start; i <= end; i++){
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
    }

    if(e == 0){
        cout << "Target variable is not found" << endl;
    }

    return 0;
}


