//Write a function to print nth Fibonacci

#include<iostream>
using namespace std;

void fibonacci(int n){
    int a = 0, b = 1, c = 0;

    if (n == 1) {
        cout << a << endl;
        return;
    }
    if (n == 2) {
        cout << b << endl;
        return;
    }

    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << b << endl;

    /* My Code:-
      void fibonacci(int n){
    int c = 0;
    int a = 0;
    int b = 1;

    for(int i = 1; i <= n - 2; i++){
        c = a + b;
        if(i == (n - 2)){
            cout << c << " ";
        }
        cout << endl;
        a = b;
        b = c;
    }
    return;
}

    */
}

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    fibonacci(n);
    return 0;
}