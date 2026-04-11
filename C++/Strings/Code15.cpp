//Valid palindrome
//Time Complexity:- O(n)
//Space Complexity:- O(1)
#include<iostream>
#include<cctype>
#include<string>
using namespace std;

bool isAlphanumeric(char ch){
    if (isalnum(ch)) {
        return true;
    } else {
        return false;
    }
}


bool isPalindrome(string &str, int n){
    int start = 0;
    int end = n - 1;

    while(start <= end){
        if (isAlphanumeric(str[start]) == false) {
            start++;
            continue;// restarts the loop before going for comparison
        }
        if (isAlphanumeric(str[end]) == false) {
            end--;
            continue;// restarts the loop before going for comparison
        }
        if (tolower(str[start]) == tolower(str[end])) {
            start++;
            end--;
        }
        else {
            return false;
        }
    }
    return true;
}

int main(){
    string str = "Ac3?e3c&$a";
    int n = str.length();

    if(isPalindrome(str,n)){
        cout << "It is Palindrome" << endl;
    }
    else{
        cout << "It is not Palindrome" << endl;
    }
    return 0;
}