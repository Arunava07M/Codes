//swap,min,max

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    cout << "max = " << max(4,5) << endl;
    cout << "min = " << min(4,5) << endl;
    int a = 5;
    int b = 10;
    swap(a,b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}