#include<iostream>
using namespace std;

int main(){
    char str[] = "hello world";
    int len = 0;

    for(int i = 0; str[i] != '\0'; i++){
        cout << str[i] << " ";
        len++;
    }
    cout << endl;
    cout << "length of string = " << len << endl;
    return 0;
}