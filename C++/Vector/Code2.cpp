//for each loop
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};

    for(int i : vec){
        cout << i << " ";// Prints the value stored in the index not the index
    }
    cout << endl;
    return 0;
}