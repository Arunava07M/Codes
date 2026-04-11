//Print the Sum of Odd digits of a number using while loop
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number = ";
    cin >> n;

    int d = 0;

    while(n > 0){
        int c = n % 10;
        if(c % 2 != 0){
            d = d + c;
        }
        n = n / 10;
    }
    cout << "Sum of Odd digits = " << d << endl;
    return 0;
}