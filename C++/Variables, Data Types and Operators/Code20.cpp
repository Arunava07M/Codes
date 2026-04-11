/*
Build a Simple Interest Calculator 
Input: principal(P), rate(R), time(T)
Output:(P*R*T)/100
*/
#include<iostream>
using namespace std;

int main(){
    float P;
    cout << "Principal = ";
    cin >> P;

    float R;
    cout << "Rate = ";
    cin >> R;

    float T;
    cout << "Time = ";
    cin >> T;

    cout << "Simple Interest = " << "Rs " << ((P * R * T) / 100) << endl;
    return 0;

}