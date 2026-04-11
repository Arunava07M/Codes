//Use of continue statement
#include<iostream>
using namespace std;

int main(){
    int i = 1;
    while(i <= 10){
        //cout << "i = " << i << endl; 
        if(i == 3){
            i++;
            continue;
        }
        cout << "i = " << i << endl;
        i++;// writing like this will run the code upto 2 only because
            //continue statement skips the rest of the loop
            //so see above before continue statement i++ should be written
    }
    return 0;
}