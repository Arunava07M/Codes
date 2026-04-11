//Sum of all numbers from 1 to n those which are divisible by 3
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number = ";
    cin >> n;

    int d = 0;

    for(int i = 1; i <= n; i++){
        if(i % 3 == 0){
            d = d + i;
        }
    }
    cout << "Sum of all Odd Numbers = " << d << endl;
    return 0;
}