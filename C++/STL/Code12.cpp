//Map

#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["earphone"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.insert({"camera", 25});
    m.emplace("desktop", 200);

    m.erase("tv");

    for(auto p : m){//since this data is a pair kind of a data
        cout << p.first << " = " << p.second << endl;
    }
    cout << "count = " << m.count ("laptop") << endl; //tells how many laptop keyexist in map
    cout << "count = " << m["laptop"] << endl;// laptop 's corresponding value is returned

    if(m.find("camera") != m.end()){
        cout << "found" << endl;
    }
    else{
        cout << "not found" << endl;
    }
    
    return 0;
}