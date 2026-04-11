//Write a function to print all prime numbers from 1 to n

#include<iostream>
#include<cmath>
using namespace std;

int prime(int i){
    int d = 0;
    for(int j = 2; j <= sqrt(i); j++){
        if(i % j == 0){
            d = 1;
            break;
        }
    }
    if(i <= 1){
        return 0;
    }
    if(d == 0){
        return i;
    }
    else{
        return 0;
    }
}

void primeRange(int n){
    for(int i = 1; i <= n; i++){
        int s = prime(i);
        if(s != 0){
            cout << s << " ";
        } 
    }
    cout << endl;
    return;
}

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    primeRange(n);
    return 0;
}