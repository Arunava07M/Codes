//Write a code where you need to return minimum of two numbers

#include<iostream>
using namespace std;

//using int
int minimum(int a, int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int min = minimum(5,6);
    cout << "minimum = " << min << endl;
    return 0;
}