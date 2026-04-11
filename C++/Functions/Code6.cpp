//Write a code where you need to return minimum of two numbers

#include<iostream>
using namespace std;

//using void
void minimum(int a, int b){
    if(a < b){
        cout << "minimum = " << a << endl;
    }
    else{
        cout << "minimum = " << b << endl;
    }
}

int main(){
    minimum(5,6);
    return 0;
}