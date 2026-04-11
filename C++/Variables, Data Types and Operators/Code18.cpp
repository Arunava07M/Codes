/*
In a program,input the side of a square
You have to output the area of the square 
Input:n(side) 
Output:n*n(area)
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Side of a Square = ";
    cin >> n;

    cout << "Area = " << (n * n) << endl;
    return 0;
}