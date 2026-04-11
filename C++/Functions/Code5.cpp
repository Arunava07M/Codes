#include<iostream>
using namespace std;

//using void
void sum(int a, int b){
    int s = a + b;
    cout << "Sum = " << s << endl;
}

int main(){
    sum(10,5);
    return 0;
}