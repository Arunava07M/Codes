#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1 = "hello";
    string str2 = "hello";
    string str3 = "hellooo";
    string str4 = "helloo";
    string str5 = "fandom";
    string str6 = "game";
    cout << (str1 == str2) << endl;//1 means yes 0 means no
    cout << (str3 > str4) << endl;//1 means yes 0 means no
    cout << (str5 > str6) << endl;//1 means yes 0 means no
    //see the relational operator in string works lexicoographically thats why answer is 0
    //as letter 'g' comes after letter 'f'
    return 0;
}