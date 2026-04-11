//print the digits of a given number in reverse order... n = 10829
#include<iostream>
using namespace std;

int main(){
    int n = 10829;
    int d = 0;
    while(n > 0){
        d = (d * 10) + (n % 10);
        n = n / 10;      
    }
    cout << "Reverse of the Number = " << d << endl;
    return 0;

    //This way of writing is also good
    /*
    cout << "Digits in reverse order: ";
    for (int i = n; i > 0; i = i / 10){
        cout << i % 10 << " ";
    }
    */
}