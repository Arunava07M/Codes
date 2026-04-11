//Sum of all Odd numbers
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number = ";
    cin >> n;

    int d = 0;

    for(int i = 1; i <= n; i = i + 2){
        d = d + i;
    }
    cout << "Sum of all Odd Numbers = " << d << endl;
    return 0;
}