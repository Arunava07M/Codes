//Map

#include<iostream>
#include<map>
using namespace std;

int main(){
    multimap<string, int> m;

    m.insert({"tv",100});
    m.insert({"tv",100});
    m.insert({"tv",100});
    m.emplace("tv",100);
    m.emplace("tv",100);


    //m.erase("tv");//full map having tv gets deleted
    m.erase(m.find("tv"));//here the memory location of any one tv key pair is found and
    //deleted but the other four is printed out of five
    for(auto p : m){//since this data is a pair kind of a data
        cout << p.first << " = " << p.second << endl;
    }
    return 0;
}