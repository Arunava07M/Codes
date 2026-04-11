//Primes in Range Count -> Most Optimal Approach
//Sieve of Erastosthenes

//Prime Numbers

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void primeinRange(int n){
    vector<bool> isPrime(n+1,true);
    int a = 0;
    for(int i = 2; i <= n; i++){
        if(isPrime[i]){
            a++;
        }
        for(int j = i * 2; j <= n; j = j + i){
            isPrime[j] = false;
        }
    }
    cout << "The count is = " << a << endl;
}

int main(){
    int n;
    cout << "Enter Your Number = ";
    cin >> n;

    primeinRange(n);
    return 0;
}