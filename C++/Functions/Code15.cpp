//Write a function to print first n Fibonacci numbers

#include<iostream>
using namespace std;

void fibonacci(int n){
    int c = 0;
    int a = 0;
    int b = 1;
    

    cout << "Fibonacci series from 1 to " << n << " = " << a << " " << b << " ";

    for(int i = 1; i <= n - 2; i++){
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return;

}
int main(){
    int n;
    cout << "n = ";
    cin >> n;

    fibonacci(n);
    return 0;
}