//Write a program where user can keep entering numbers till they enter a multiple of 10
#include<iostream>
using namespace std;

int main(){
    while(true){
        int n;
        cout << "Enter the number = ";
        cin >> n;

        if(n % 10 == 0){
            break;
        }

        cout << n << endl;
    }
    return 0;    
}