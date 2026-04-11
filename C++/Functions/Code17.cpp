/*
Write a function to check if a number is a palindrome in C++.
(Example: 121 is a palindrome, 321 is not.)

A number is called a palindrome if the number is equal to the reverse of the number.

For example:

121 is a palindrome because the reverse of 121 is 121 itself.

On the other hand, 321 is not a palindrome because the reverse of 321 is 123, 
which is not equal to 321.
*/

#include<iostream>
using namespace std;

void palindrome(int n){

    int s = n;
    int r = 0;

    for(int i = s; i > 0; i = i / 10){
        s = i % 10;
        r = (r * 10) + s;
    }

    /*
    int s = n;
    int e = 0;
    while(s > 0){
        int d = s % 10;
        e = (e * 10) + d;
        s = s / 10;
    }*/
    
    if(r == n){
        cout << "The number is a Palindrome Number" << endl;
    }
    else{
        cout << "The number is not a Palindrome Number" << endl;
    }
    return;
}

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    palindrome(n);
    return 0;
}

