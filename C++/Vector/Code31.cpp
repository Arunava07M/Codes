//Pair Sum My Code Brute Force...Works for all

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

void pairsum(vector<int> &vec, int n, int a){
    int st = 0;
    int en = 0;
    for(int i = 0; i <= n - 1; i++){
        st = i;
        int d = 0;
        for (int j = i; j <= n - 1; j++){
            d = d + vec[j];
            if(d == a){
                en = j;
                break;
            }
        }
        if(d == a){
            break;
        }
    }
    for(int i = st; i <= en; i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}


int main(){
    int n;
    cin >> n;
    vector<int> vec(n);

    for(int i = 0; i <= n - 1; i++){
        cin >> vec[i];
    }

    int a;
    cin >> a;

    pairsum(vec,n,a);
    return 0;
}