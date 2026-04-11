#include <iostream>
using namespace std;

int factorial(int n){
    int s = 1;
    for(int i = n; i > 0; i--){
        s = s * i;
    }
    return s;
}

void BinomialCoeff(int n, int r){
    int factn = factorial(n);
    int factr = factorial(r);
    int factnr = factorial(n - r);

    int BinCoeff = factn/(factr * factnr);
    cout << "Binomial coefficient = " << BinCoeff << endl;
    return;
}

int main(){
    int n, r;
    cout << "n = ";
    cin >> n;

    cout << "r = ";
    cin >> r;

    BinomialCoeff(n, r);
    return 0;
}
