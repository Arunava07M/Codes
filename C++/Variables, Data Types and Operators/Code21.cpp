/*
Write a program to calculate the area of a circle
Input: r(radius)
Output: PI*r*r(area)
*/

#include<iostream>
#define PI 3.14
using namespace std;

int main(){
    int r;
    cout << "Radius = ";
    cin >> r;

    cout << "Area = " << (PI * r * r) << endl;
    return 0;
}