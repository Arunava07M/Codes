#include<iostream>
#include<vector>
using namespace std;

int main(){
    //1) vector<int> vec;//Size = 0.... printing vec[0] will give segmentaion fault error as vector
    //is empty
    //2) below
    vector<int> vec = {1,2,3};//Size = 3
    cout << vec[0] << endl;
    //3) vector<int> vec(3,0); here 3 is size and 
    //printing vec[0] or vec[1] or vec[2] will give 0
    
}