//For a Positive n, write a program that prints all the prime numbers from 2 to n
//(Assume n >= 2)

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter your Range = ";
    cin >> n;


    for(int i = 2; i <= n; i++){
        int d = 0; //Reset to 0 for each number
        if(i == 2){
                cout << i << " ";
        }
        else{
            for(int j = 2; j <= sqrt(i); j++){
                if(i % j == 0){
                    d = 1;
                    break;
                }
            }
            if(d == 0){
                cout << i << " ";
            }
        }
    }
    cout << endl;
    return 0;
}
