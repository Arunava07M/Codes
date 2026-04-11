//Prime Numbers
//Time Complexity -> O(sqrt(n))

#include<iostream>
#include<cmath>
using namespace std;

void primeNumber(int n){
    int d = 0;
    if(n <= 1){
        cout << "The number is neither prime nor composite" << endl;
        return;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            cout << "The number is not Prime" << endl;
            d = 1;
        }
    }
    if(d == 0){
        cout << "The number is Prime" << endl;
    }
}

int main(){
    int n;
    cout << "Enter Your Number = ";
    cin >> n;

    primeNumber(n);
    return 0;
}