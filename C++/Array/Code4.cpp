//Find smallest and largest in array

#include<iostream>
using namespace std;

int main(){
    int marks[] = {5,15,22,1,-15,24};

    int size = sizeof(marks) / sizeof(int);

    int d = INT_MIN;//Smallest Value for any integer number

    int e = INT_MAX;//Highest Value for any integer number

    for(int i = 0; i <= size - 1; i++){
        if(marks[i] > d){
            d = marks[i];
        }
        if(e > marks[i]){
            e = marks[i];
        }
    }
    cout << "The smallest element in the array is = " << e << endl;
    cout << "The largest element in the array is = " << d << endl;
    return 0;
}