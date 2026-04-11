//Check for power of 2

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    int d = (n & (n - 1));

    if(d == 0){
        cout << "It is power of 2" << endl;
    }
    else{
        cout << "It is not power of 2" << endl;
    }
    return 0;
}