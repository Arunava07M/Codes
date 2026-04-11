// Write a C++ program to take a number as input from the user and 
// check whether it is positive, negative, or zero.
// The program should display the result based on the sign of the number
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your number = ";
    cin >> n;

    if(n > 0){
        cout << "The number is positive" << endl;
    }
    else if(n == 0){
        cout << "The number is zero" << endl;
    }
    else{
        cout << "The number is negative" << endl;
    }
    return 0;
}