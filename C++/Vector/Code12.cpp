//This is not proper Pair Sum

//Pair Sum but here anomally like 2,11 is not considered -> see the array used
//here it is considered continuous -> Brute Force Approach 1 (a)
//This Code handles when no two pairs give same value for eg {2,3,4,5}
//here 2+3 = 5 is also there and only 5 is also there

#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,7,11,15};
    int n = sizeof(arr)/sizeof(int);

    int target = 26;
    int e = 0;
    int st = 0;
    int en = 0;
    int tempst = 0;

    for(int start = 0; start <= n - 1; start++){
        for(int end = start; end <= n - 1; end++){
            int d = 0;
            for(int a = start; a <= end; a++){
                d = d + arr[a];
                if(d == target){
                    e = 1;
                    st = start;
                    en = end;
                    break;
                }
            }
            if(e == 1){
                break;
            }
        }
        if(e == 1){
            break;
        }
    }
    if(e == 1){
        cout << "The target Variable is found" << endl;
        cout << "The Pair = ";
        for (int i = st; i <= en; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else{
        cout << "Target variable is not found" << endl;
    }
    return 0;
}