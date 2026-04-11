//Pairs

#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main(){
    vector<pair<int,int>> vec = {{1,2},{2,3},{3,4}};

    vec.push_back({4,5});//just insert assuming pair is formed
    vec.emplace_back(5,6);// in place object create make pair and insert
    
    for(pair<int,int> p : vec){//instead of "pair<int,int> p" you could have written "auto p"
        cout << p.first << " " << p.second << endl;
    }
    for(auto p : vec){//does same thing as above using "auto" keyword
        cout << p.first << " " << p.second << endl;
    }
}