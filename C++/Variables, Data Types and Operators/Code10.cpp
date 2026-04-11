#include<iostream>
using namespace std;

int main(){
    //Logical operator
    cout << !(3 > 1) << endl;
    cout << ((5 > 2) && (3 < 1)) << endl;//use outer brackets or else it will not work
    cout << ((5 > 2) || (3 < 1)) << endl;
    return 0;
}