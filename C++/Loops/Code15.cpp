//Use of Break Statement
#include<iostream>
using namespace std;

int main(){
    int i = 1;
    while(i <= 10){
        //cout << "i = " << i << endl; if placed here then till 3 it will get printed and exit
        if(i == 3){
            break;
        }
        cout << "i = " << i << endl;
        i++;
    }
    return 0;
}