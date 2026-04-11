//Find smallest and largest in array with their indexes

#include<iostream>
using namespace std;

int main(){
    int marks[] = {5,15,22,1,-15,24};

    int size = sizeof(marks) / sizeof(int);

    int d = INT_MIN;//Smallest Value for any integer number
    int f = 0;

    int e = INT_MAX;//Highest Value for any integer number
    int g = 0;

    for(int i = 0; i <= size - 1; i++){
        if(marks[i] > d){
            d = marks[i];
            f = i;
        }
        if(e > marks[i]){
            e = marks[i];
            g = i;
        }
    }
    cout << "The smallest element in the array is = " << e << " stored at index " << g << endl;
    cout << "The largest element in the array is = " << d << " stored at index " << f << endl;
    return 0;
}