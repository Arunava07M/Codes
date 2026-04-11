//Print if a number is Even or Odd
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your number = ";
    cin >> n;

    if(n % 2 == 0){
        cout << "The number is Even" << endl;
    }
    else{
        cout << "The number is Odd" << endl;
    }
    return 0;
}