//Update i th bit

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;

    int i;
    cout << "i = ";
    cin >> i;

    int val;
    cout << "val = ";
    cin >> val;

    int d = ~(1 << i);
    int e = (n & d);

    if(val == 0){
        cout << e << endl;
    }
    else{
        int f = (e | (1 << i));
        cout << f << endl;
    }
    return 0;
}