//Remove all Occurences of a String

#include<iostream>
#include<string>
using namespace std;

void removeOccurences(string &str, string &part, int x){
    while(str.length() > 0 && str.find(part) < str.length()){
        //instead of str.find(part) < str.length() ...str.find(part) != string::npos this is
        //safer
        int i = str.find(part);
        str.erase(i,x);
    }
    for(int i = 0; i <= str.length() - 1; i++){
        cout << str[i];
    }
    cout << endl;
}

int main(){
    string str = "daabcbaabcbc";
    int n = str.length();

    string part = "abc";
    int x = part.length();

    removeOccurences(str,part,x);
    return 0;
}