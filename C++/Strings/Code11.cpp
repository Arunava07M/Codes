#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "hello.";
    for(int i = 0; i <= str.length() - 1; i++){
        cout << str[i] << " ";
    }
    cout << endl;

    for(char ch : str){
        cout << ch << " ";
    }
    cout << endl;
    return 0;
}