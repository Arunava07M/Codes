//Sum of all natural numbers from 1 to n
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your Number = ";
    cin >> n;

    int d = 0; //Always initialize Variables

    for(int i = 1; i <= n; i++){
        d = d + i;
    }
    cout << "Sum of n Numbers = " << d << endl;
    return 0;
}