//Write a function to print all the unique values in an array

#include<iostream>
using namespace std;

void uniqueValues(int arr[], int size){
    cout << "Unique Numbers = ";
    for(int i = 0; i <= size - 1; i++){
        int d = 0;
        for(int j = 0; j <= size - 1; j++){
            if(arr[i] == arr[j]){
                if(i != j){
                    d = 1;
                }
                //else{
                    //d = 0; when i first wrote code i wrote this line and error came
                //} but after removing it my code worked perfectly so check why?
                //try checking using {1,2,1}
            }
        }
        if(d == 0){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return;
}

int main(){
    int arr[] = {1,2,1,2,3,4};
    int size = sizeof(arr)/sizeof(int);

    uniqueValues(arr,size);
    return 0;
}