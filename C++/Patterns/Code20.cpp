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

    int d = 1;

    int f = 0;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }

        int e = d;
        for(int k = 1; k <= i; k++){
            cout << e;
            e++;
        }

        int c = f;
        for(int m = 1; m <= i - 1; m++){
            cout << c;
            c--;
        }

        //for(int l = 1; l <= n - i; l++){
            //cout << " ";
        //} See this line does not make sense but i kept it so that you know that when
        //i was solving question i thought about considering spaces of right side
        f++;
        cout << endl;
    }
    return 0;
}