//GCD of a Number -> Brute Force
#include<iostream>
#include<algorithm>
using namespace std;

void gcdof(int a, int b){
    int gcd = 0;
    for(int i = 1; i <= min(a,b); i++){
        if(a == 0 || b == 0){// base case
            gcd = max(a,b);
            cout << "GCD = " << gcd << endl;
            return;
        }
        if(a == b){// base case
            gcd = a;
            cout << "GCD = " << gcd << endl;
            return;// see return does not let it go to next line it directly ends the function
        }
        if((a % i == 0) && (b % i == 0)){
            gcd = max(gcd,i); 
        }
    }
    cout << "GCD = " << gcd << endl;
    return;
}

int main(){
    int a;
    cout << "a = ";
    cin >> a;
    int b;
    cout << "b = ";
    cin >> b;

    gcdof(a,b);
    return 0;
}