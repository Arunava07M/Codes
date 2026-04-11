//Find UpperCase and LowerCase
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter your Character = ";
    cin >> ch;

    if(ch >= 65 && ch <= 90){ // We could have use ch >= 'A' && ch <= 'Z'
        cout << "It is UpperCase" << endl;
    }
    else if(ch >= 97 && ch <= 122){ // We could have use ch >= 'a' && ch <= 'z'
                                    //Directly writing else after if also works
        cout << "It is LowerCase" << endl;
    }
    else{
        cout << "No Case" << endl;
    }
    return 0;
}