//Count Set Bits

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "num = ";
    cin >> num;

    int c = 0;

    while(num > 0){
        int d = (num & 1);
        c = c + d;
        num = num >> 1;
    }
    cout << "Count Set Bits = " << c << endl;
    return 0;
}