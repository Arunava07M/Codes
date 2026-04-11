//Another way of printing
//Pattern 20:- when n = 4
//   1  
//  121
// 12321
//1234321

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << k;
        }

        for(int m = i - 1; m > 0; m--){
            cout << m;
        }

        //for(int l = 1; l <= n - i; l++){
            //cout << " ";
        //} See this line does not make sense but i kept it so that you know that when
        //i was solving question i thought about considering spaces of right side
        cout << endl;
    }
    return 0;
}