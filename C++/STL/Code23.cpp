//Reverse

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};
    
    cout << "is the element 4 there = " << binary_search(vec.begin(),vec.end(),4) << endl;
    cout << "is the element 10 there = " << binary_search(vec.begin(),vec.end(),10) << endl;
    
    return 0;
}