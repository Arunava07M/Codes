// Write a C++ program that takes a year as input from the user 
// and checks whether it is a leap year or not.
// The program should display if the entered year is a leap year based on leap year rules.
#include<iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter your Year = ";
    cin >> year;

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                cout << "The year is a Leap Year" << endl;
            }
            else{
                cout << "The year is not a Leap Year" << endl;
            }
        }
        else{
            cout << "The year is a Leap Year" << endl;
        }
    }
    else{
        cout << "The year is not a Leap Year" << endl;
    }
    return 0;
}