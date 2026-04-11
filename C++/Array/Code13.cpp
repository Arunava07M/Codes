//Write a function to print intersection of two arrays


#include<iostream>
using namespace std;

void intersection(int arr[], int arr2[],int size, int size2){
    cout << "Intersection = ";
    for(int i = 0; i <= size - 1; i++){
        for(int j = 0; j <= size2 - 1; j++){
            if(arr[i] == arr2[j]){
                cout << arr[i] << " ";
            }
        }
    }
    cout << endl;
    return;
}

int main(){
    int arr[] = {1,2,3,4};
    int arr2[] = {3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);

    intersection(arr,arr2,size,size2);
    return 0;
}