//Set ith Bit

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
    int e = (n | bitmask);

    cout << "The value is = " << e << endl;
    return 0;
}