//Armstrong Number

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter the number = ";
    cin >> n;

    int e = n;//To use in while loop... if i had used n then the if else will give wrong
              //result...so i am storing the value of n in e so that in if else i can use n

    int d = 0;

    while(e > 0){
        d = d + (pow((e % 10),3));;
        e = e / 10;
    }
    if(d == n){
        cout << "The number is an Armstrong number" << endl;
    }
    else{
        cout << "The number is not an Armstrong Number" << endl;
    }
    return 0;
}