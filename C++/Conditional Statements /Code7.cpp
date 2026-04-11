//Create an income tax calculator
//income < 5L -> 0% Tax
//income 5L to 10L -> 20% Tax
//income > 10L -> 30% Tax
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float income;
    cout << "Income = ";
    cin >> income;

    float tax = 0.0;

    if(income < 500000){
        cout << "No Tax" << endl;
    }
    else if(income >= 500000 && income <= 1000000){
        tax = income * 0.2;
        cout << fixed << setprecision(2);
        cout << "Tax to be paid after income = " << tax << endl;
    }

    else{
        tax = income * 0.3;
        cout << fixed << setprecision(2);
        cout << "Tax to be paid after income = " << tax << endl;
    }
    return 0;
}
