//Fast Exponentiation

#include<iostream>
using namespace std;

int main(){
    int x = 3;
    int n = 5;

    int ans = 1;

    while(n > 0){
        int lastbit = n & 1;
        n = n >> 1;
        if (lastbit == 1){
            ans = ans * x;
        }
        x = x * x;        
    }
    cout << ans << endl;
}