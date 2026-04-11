//Write a program where user can keep entering numbers till they enter a multiple of 10
//and also after skipping multiple of 10
#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i > 0; i++){
        int n;
        cout << "Enter a Number = ";
        cin >> n;

        if(n % 10 == 0){
            continue;
        }
        
        cout << n << endl;
    }
    return 0;    
}