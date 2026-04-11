//Compute x^n, Using Binary Exponentiation -> Fast Exponentiation of Bit Manipulation

//Fast Exponentiation

#include<iostream>
using namespace std;

int main(){
    double x;
    cout << "x = ";
    cin >> x;

    int n;
    cout << "n = ";
    cin >> n;

    double ans = 1;

    if(n < 0){
        x = 1 / x;
        n = -n;
    }

    while(n > 0){
        int lastbit = n & 1;//you can write n%2
        if (lastbit == 1){
            ans = ans * x;
        }
        x = x * x;
        n = n >> 1;//you can write n/2
    }

    cout << ans << endl;
    return 0;
}


