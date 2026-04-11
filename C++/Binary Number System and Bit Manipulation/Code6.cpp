//Get ith Bit

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    int i;
    cout << "i = ";
    cin >> i;

    int bitmask = (1 << i);
    int e = (n & bitmask);

    if(e > 0){
        cout << "The bit is 1" << endl;
    }
    else{
        cout << "The bit is 0" << endl;
    }
    return 0;
}