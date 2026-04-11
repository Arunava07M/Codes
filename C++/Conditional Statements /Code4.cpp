#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the marks = ";
    cin >> n;

    if(n >= 90){
        cout << "Grade = A" << endl;
    }
    else if (n < 90 && n >= 70){
        cout << "Grade = B" << endl;
    }
    else if (n < 70 && n >= 50){
        cout << "Grade = C" << endl;
    }
    else if (n < 50 && n >= 30){
        cout << "Grade = D" << endl;
    }
    else{
        cout << "Grade = E" << endl;
    }
    return 0;
    
}