//Pair

#include<iostream>
#include<utility>
using namespace std;

int main(){
    pair<int,int> p = {1,2};
    pair<string,int> p1 = {"a", 2};
    pair<int,pair<int,int>> p2 = {1, {2,3}};

    cout << p.first << endl;
    cout << p.second << endl;

    cout << p1.first << endl;
    cout << p1.second << endl;

    cout << p2.first << endl;
    cout << p2.second.first << endl;
    cout << p2.second.second << endl;

    return 0;
}