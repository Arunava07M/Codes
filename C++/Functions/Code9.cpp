//Calculate N factorial

#include<iostream>
using namespace std;

int factorial(int n){
    int s = 1;
    for(int i = 1; i <= n; i++){
        s = s * i;
    }
    return s;
}

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    int factorialofn = factorial(n);
    cout << "factorial of " << n << " = " << factorialofn << endl;
    return 0;
}