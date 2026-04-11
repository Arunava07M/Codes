//Deque

#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    
    d.push_back(1); // [//,//,//,1]
    d.push_back(2); // [//,//,1,2]
    d.push_front(3);// [3,//,1,2]
    d.push_front(5);// [5,3,1,2]

    d.pop_back();// [5,3,1]
    d.pop_front();// [3,1]

    for(int i : d){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}