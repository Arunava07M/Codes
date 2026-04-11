//Write a function to check if a number is prime or not

#include<iostream>
#include<cmath>
using namespace std;

void checkPrime(int n){
    int d = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            d = 1;
        }
    }
    if(n <= 1){
        cout << "This is not Prime Number or Composite Number" << endl;
    }
    else if(d == 0){
        cout << "This is a Prime Number" << endl;
    }
    else{
        cout << "This is not a Prime Number" << endl;
    }
}

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    checkPrime(n);
    return 0;
}