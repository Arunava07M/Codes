//Count Set Bits

#include<iostream>
using namespace std;

int main(){
    int n = 15;
    long int i = 16;
    cout << "set bits = " << __builtin_popcount(n) << endl;// set bits = 4
    cout << "set bits for long int = " << __builtin_popcountl(i) << endl;// set bits = 1 
    // __builtin_popcountl() here that extra "l" is added after popcount for "long int"

    long long int j = 17;
    cout << "set bits for long long int = " << __builtin_popcountll(j) << endl;// set bits = 2 
    // __builtin_popcountl() here that extra "ll" is added after popcount for "long long int"


}