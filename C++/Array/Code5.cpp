//Find smallest and largest in array

#include<iostream>
using namespace std;

int main(){
    int marks[] = {5,15,22,1,-15,24};

    int size = sizeof(marks) / sizeof(int);

    int d = INT_MIN;


    int e = INT_MAX;


    for(int i = 0; i <= size - 1; i++){
        d = max(marks[i],d);//max function to find the largest
        e = min(marks[i],e);//min function to find the smallest
    }
    cout << "The smallest element in the array is = " << e << endl;
    cout << "The largest element in the array is = " << d << endl;
    return 0;
}