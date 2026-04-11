//Reverse a string

#include<iostream>
#include<utility>
#include<string>
using namespace std;

void reverseString(string &str, int n){
    int start = 0;
    int end = n - 1;

    while(start <= end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
    for(int i = 0; i <= n - 1; i++){
        cout << str[i];
    }
    cout << endl;
}

int main(){
    string str = "hello world";
    int n = str.length();

    reverseString(str,n);

    //another way using stl functions
    string str1 = "hello world";
    reverse(str1.begin(),str1.end());
    cout << str1 << endl;
    return 0;
}