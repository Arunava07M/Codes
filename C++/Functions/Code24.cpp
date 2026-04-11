// Function Overloading

#include <iostream>
using namespace std;

void sum(int a, int b) {
  int d = a + b;
  cout << "Sum = " << d << endl;
}

void sum(int a, int b, int c) {
  int d = a + b + c;
  cout << "Sum = " << d << endl;
}

void sum(double a, double b) {
  int d = a + b;
  cout << "Sum = " << d << endl;
}

/*
Note:- functions that differ only in their return type cannot be overloaded
hece it will give error if you include the below code
double sum(int a, int b){
    int d = a + b;
    cout << "Sum = " << d << endl;
}
*/

int main() {
  sum(1, 2);
  sum(1, 2, 3);
  sum(1.5, 2.5);
}
