//Map

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> m;

    m.insert({"tv",100});
    m.insert({"laptop",100});
    m.emplace("earphone",50);
    m.emplace("tablet",120);
    m.emplace("watch",50);

    for(auto p : m){
        cout << p.first << " = " << p.second << endl;
    }
    return 0;
}