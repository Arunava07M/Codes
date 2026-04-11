//Reverse Words in String

#include<iostream>
#include<string>
using namespace std;

string reverseWords(string str){
    int n = str.length();
    string ans = "";

    reverse(str.begin(), str.end());

    for(int i = 0; i <= n - 1; i++){
        string word = "";
        while(i < n && str[i] != ' '){
            word = word + str[i];
            i++;
        }
        if(word.length() > 0){
            reverse(word.begin(), word.end());
            ans = ans + " " + word;
        }
    }

    if(ans.length() > 0){
        return ans.substr(1); // remove leading space
    } else {
        return ""; // return empty string if no words
    }
}


int main(){
    string str = "the pen";

    cout << reverseWords(str) << endl;

    return 0;
}

