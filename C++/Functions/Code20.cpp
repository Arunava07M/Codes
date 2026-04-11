/*
Write a function that accepts a character (ch) as a parameter and returns the character 
that occurs after ch in the English alphabet.

For example:

Input: 'c' → Return value: 'd'

Input: 'x' → Return value: 'y'

Input: 'z' → Return value: 'a'

Note: If ch is 'z', the function should return 'a'
*/

#include<iostream>
using namespace std;

void returnCharacter(char ch){
    char d = ch + 1;
    if(ch == 'z'){
        d = 'a';
        cout << "Character returning = " << d << endl;
    }
    else if(ch == 'Z'){
        d = 'A';
        cout << "Character returning = " << d << endl;
    }
    else{
        cout << "Character returning = " << d << endl;
    }
    return;
}

int main(){
    char ch;
    cout << "ch = ";
    cin >> ch;

    returnCharacter(ch);
    return 0;
}