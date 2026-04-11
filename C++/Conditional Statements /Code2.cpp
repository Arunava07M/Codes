#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your age = ";
    cin >> n;

    if(n >= 18){
        cout << "Eligible to Vote" << endl;
    }
    else{
        cout << "Not Eligible to Vote" << endl;
    }
    return 0;
}