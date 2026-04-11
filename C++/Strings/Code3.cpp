#include<iostream>
using namespace std;

int main(){
    char str[12];//if we print "hello world" then if we had size 100 then garbage value
                 //might have got printed so limited it to 12 and 12 th character is "\0"
                 //"hello world" has a space between so that is also a character
                 //this 12 i have said because i started the indexing from 1 not 0
    cout << "enter string = ";
    cin.getline(str,100);

    for(char ch : str){
        cout << ch << " ";
    }
    cout << endl;
    return 0;
}