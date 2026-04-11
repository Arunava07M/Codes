//Check if Odd or Even

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    int d = (n & 1);//1 is the bitmask

    if(d == 1){
        cout << "Odd Number" << endl;
    }
    else{
        cout << "Even Number" << endl;
    }
    return 0;
}