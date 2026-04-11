//print the sum of digits of a number using while loop... n = 10829
#include<iostream>
using namespace std;

int main(){
    int n = 10829;
    int d = 0;
    while(n > 0){
        d = d + (n % 10);
        n = n / 10;      
    }
    cout << "Sum of digits = " << d << endl;
    return 0;
}