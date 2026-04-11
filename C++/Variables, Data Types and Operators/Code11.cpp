//Sum of Two Numbers (User Input)
#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "a = ";
    cin >> a;
    
    int b;
    cout << "b = ";
    cin >> b;

    int c = a + b;
    cout << "Sum = " << c << endl;
    //You could have written like this
    cout << "Sum = " << (a + b) << endl;
    return 0;
}