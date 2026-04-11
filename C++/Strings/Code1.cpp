#include<iostream>
using namespace std;

int main(){
    char str[] = {'a','b','c','\0'};
    char str1[] = {'a','b','c'};
    char str2[] = "hello"; // string literal

    cout << "string length of str1 = " << strlen(str) << endl;//string length
    cout << str1 << endl; //not a valid string as it does not have character '\0'
    cout << str2 << endl; 
    return 0;
}