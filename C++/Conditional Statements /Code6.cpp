//Find the greater number among the given two number
#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "a = ";
    cin >> a;

    int b;
    cout << "b = ";
    cin >> b;

    if(a > b){
        cout << "a is greater than b" << endl;
    }
    else if(b > a){
        cout << "b is greater than a" << endl;
    }
    else{
        cout << "a = b" << endl;
    }
    return 0;
}