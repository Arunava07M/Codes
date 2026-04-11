//Find if a string is palindrome or not

#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string &str, int n){
    int start = 0;
    int end = n - 1;

    while(start <= end){
        if(str[start] == str[end]){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    //string str = "Ac3?e3c&a";
    string str = "racecar";
    int n = str.length();

    if(isPalindrome(str,n)){
        cout << "It is Palindrome" << endl;
    }
    else{
        cout << "It is not Palindrome" << endl;
    }
    return 0;
}