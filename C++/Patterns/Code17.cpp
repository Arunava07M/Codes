//Pattern 17:- when n = 4
//**** 
//*** 
//** 
//*

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}