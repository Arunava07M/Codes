//List

#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    
    l.push_back(1); // [//,//,//,1]
    l.push_back(2); // [//,//,1,2]
    l.push_front(3);// [3,//,1,2]
    l.push_front(5);// [5,3,1,2]

    l.pop_back();// [5,3,1]
    l.pop_front();// [3,1]

    for(int i : l){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}