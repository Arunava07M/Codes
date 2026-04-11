//Calculate the sum of numbers from 1 to N

#include<iostream>
using namespace std;

int sum(int n){
    int s = 0;
    for(int i = 1; i <= n; i++){
        s = s + i;
    }
    return s;
}

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    int sumofNumbers = sum(n);
    cout << "Sum of numbers from 1 to " << n << " = " << sumofNumbers << endl;
    return 0;
}