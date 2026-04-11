#include <iostream>
using namespace std;

void BinomialCoeff(int n, int r){
    if (r > n) {
        cout << "Invalid input: r cannot be greater than n." << endl;
        return;
    }

    if (r == 0 || r == n) {
        cout << "Binomial Coefficient = 1" << endl;
        return;
    }

    long long factN = 1, factR = 1, factNR = 1;// long long is good as int can introduce
                                               //overflow risk

    for(int i = 2; i <= n; i++){
        factN *= i;
    }

    for(int i = 2; i <= r; i++){
        factR *= i;
    }

    // Compute (n - r)!
    for(int i = 2; i <= n - r; i++){
        factNR *= i;
    }

    long long result = factN / (factR * factNR);
    cout << "Binomial Coefficient = " << result << endl;
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
